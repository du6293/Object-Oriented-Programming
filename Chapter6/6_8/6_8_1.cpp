#include <iostream>
/* 포인터와 정적 배열*/
using namespace std;

int main()
{
	int array[5] = {9,7,5,3,1};

	cout << array << endl; // 0번째 element의 memory address 출력
	cout << array[0] << " " << array[1] << endl;
	cout << &(array[0]) << endl; // 0번째 element의 memory address 출력

	cout << *array << endl; // de-referencing, 0번째 element의 값 출력

	int *ptr = array;
	cout << ptr << endl; // 0번째 element의 memory address 출력
	cout << *ptr << endl; // 0번째 element의 값 출력


	// 정적 array도 포인터이다.
	char name[] = "jackjack";
	cout << *name << endl; // 0번째 element 값 출력

	return 0;
}
