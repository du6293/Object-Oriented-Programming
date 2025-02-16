#include <iostream>

/* ���� ����(reference variable) */

using namespace std;

// printElements�� arr�� main�� arr�� ���� �ּҰ��� ���� ���� 
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
