#include <iostream>

/* 참조 변수(reference variable) */

using namespace std;

// printElements의 arr과 main의 arr은 같은 주소값을 갖는 변수 
void printElements(int (&arr)[5])
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << &arr << endl;
}

int main()
{
	const int length = 5;
	int arr[length] = { 1,2,3,4,5 };
	printElements(arr);
	cout << &arr << endl;

	return 0;
}
