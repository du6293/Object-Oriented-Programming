#include <iostream>
#include <iomanip>
#include <cuda_runtime.h>

#define TILE_DIM W  // Ensure TILE_DIM is equal to W for the matrix multiplication
#define M 512  // Matrix A: number of rows
#define W 32   // Matrix A: number of columns, Matrix B: number of rows
#define N 512  // Matrix B: number of columns

void initializeMatrix(float *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i * cols + j] = static_cast<float>(rand()) / RAND_MAX;
        }
    }
}

__global__ void sharedABMultiply(float *a, float *b, float *c)  // Corrected the function signature
{
    __shared__ float aTile[TILE_DIM][TILE_DIM], bTile[TILE_DIM][TILE_DIM];  // Both A and B use shared memory

    int row = blockIdx.y * blockDim.y + threadIdx.y;
    int col = blockIdx.x * blockDim.x + threadIdx.x;
    float sum = 0.0f;

    aTile[threadIdx.y][threadIdx.x] = a[row * W + threadIdx.x];  // Load part of matrix A into shared memory
    bTile[threadIdx.y][threadIdx.x] = b[threadIdx.y * N + col];  // Load part of matrix B into shared memory
    __syncthreads();  // Synchronize all threads within the block

    for (int i = 0; i < TILE_DIM; i++) {
        sum += aTile[threadIdx.y][i] * bTile[i][threadIdx.x];  // Both matrices use shared memory
    }
    c[row * N + col] = sum;  // Store result in matrix C
}

int main() {
    // Define matrix sizes
    int sizeA = M * W * sizeof(float);  // Size for matrix A (M x W)
    int sizeB = W * N * sizeof(float);  // Size for matrix B (W x N)
    int sizeC = M * N * sizeof(float);  // Size for result matrix C (M x N)

    // Allocate host memory
    float *h_a = (float*)malloc(sizeA);
    float *h_b = (float*)malloc(sizeB);
    float *h_c = (float*)malloc(sizeC);

    // Initialize matrices A and B
    initializeMatrix(h_a, M, W);
    initializeMatrix(h_b, W, N);

    // Allocate device memory
    float *d_a, *d_b, *d_c;
    cudaMalloc((void**)&d_a, sizeA);
    cudaMalloc((void**)&d_b, sizeB);
    cudaMalloc((void**)&d_c, sizeC);

    // Copy matrices A and B to device
    cudaMemcpy(d_a, h_a, sizeA, cudaMemcpyHostToDevice);
    cudaMemcpy(d_b, h_b, sizeB, cudaMemcpyHostToDevice);

    // Define grid and block dimensions
    dim3 dimBlock(TILE_DIM, TILE_DIM);  // Each block computes a TILE_DIM x TILE_DIM tile of matrix C
    dim3 dimGrid((N + TILE_DIM - 1) / TILE_DIM, (M + TILE_DIM - 1) / TILE_DIM);  // Grid size depends on matrix size

    // Launch kernel with correct name and parameters
    sharedABMultiply<<<dimGrid, dimBlock>>>(d_a, d_b, d_c);

    // Copy result matrix C back to host
    cudaMemcpy(h_c, d_c, sizeC, cudaMemcpyDeviceToHost);

    // Display a part of the result matrix
    std::cout << "Result matrix C (first 10 x 10 block):" << std::endl;
    std::cout << std::fixed << std::setprecision(6);
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            std::cout << h_c[i * N + j] << " ";
        }
        std::cout << std::endl;
    }

    // Free device memory
    cudaFree(d_a);
    cudaFree(d_b);
    cudaFree(d_c);

    // Free host memory
    free(h_a);
    free(h_b);
    free(h_c);

    return 0;
}

