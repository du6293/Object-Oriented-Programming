#include <iostream>
/* 이중 포인터와 동적 다차원 배열 */
using namespace std;

int main()
{
	const int row = 3;
	const int col = 5;

	const int s2da[row][col] =
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};

	int* r1 = new int[col] {1, 2, 3, 4, 5};
	int* r2 = new int[col] {6, 7, 8, 9, 10};
	int* r3 = new int[col] {11, 12, 13, 14, 15};

	// row 갯수 만큼 정수형 포인터를 저장하는 배열
	// 각 포인터는 각 행의 첫 번째 원소를 가리킴
	int** rows = new int* [row] {r1, r2, r3};

	for (int r = 0; r < row; ++r)
	{
		for (int c = 0; c < col; ++c)
		{
			cout << rows[r][c] << " ";;
		}
		cout << endl;
	}

	delete[] r1;
	delete[] r2;
	delete[] r3;
	delete[] rows;

	return 0;
}
