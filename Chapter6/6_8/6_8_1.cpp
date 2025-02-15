#include <iostream>
/* 포인터와 정적 배열*/
using namespace std;

int main()
{
	int array[5] = {9,7,5,3,1};

	cout << array << endl;
	cout << array[0] << " " << array[1] << endl;
	cout << &(array[0]) << endl;

	cout << *array << endl; // de-referencing

	int *ptr = array;
	cout << ptr << endl;
	cout << *ptr << endl;


	// 정적 array도 포인터이다.
	char name[] = "jackjack";
	cout << *name << endl;


	return 0;
}
