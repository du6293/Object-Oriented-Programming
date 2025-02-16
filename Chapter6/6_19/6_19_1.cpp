#include <iostream>
/* 이중 포인터와 동적 다차원 배열 */
using namespace std;

int main()
{
	int* ptr = nullptr;
	int** ptrptr = nullptr;
	
	int value = 5;
	ptr = &value;
	ptrptr = &ptr;

	cout << ptr << " " << *ptr << " " << &ptr << " " << endl;
	cout << ptrptr << " " << *ptrptr << " " << &ptrptr << " " << endl;
	cout << **ptrptr << endl;

	return 0;
}
