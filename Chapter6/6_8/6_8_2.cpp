#include <iostream>
/* 포인터와 정적 배열*/
using namespace std;

// 파라미터로 array가 들어가는 순간 array[]는 내부적으로 포인터이다.
//void printArray(int *array)와 같다
//void printArray(int array[])
void printArray(int* array)
{
	cout << sizeof(array) << endl;
	cout << *array << endl;

	//*array = 100;

}

int main()
{
	int array[5] = {9,7,5,3,1};

	cout << sizeof(array) << endl; // 4bytes * 5 = 20 bytes

	int* ptr = array;
	cout << sizeof(ptr) << endl; // 포인터 변수의 크기는 4bytes
	cout << endl;

	printArray(array);	// 4bytes
	cout << array[0] << " " << *array << endl;
	cout << endl;

	// pointer arithmetic: 포인터에다 값을 더하고 빼는 것
	cout << *ptr << " " << *(ptr + 1) << endl;
	return 0;
}
