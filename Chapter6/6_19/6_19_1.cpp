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

	cout << ptr << " " << *ptr << " " << &ptr << " " << endl; // value 주소   5   ptr 주소
	cout << ptrptr << " " << *ptrptr << " " << &ptrptr << " " << endl; // ptr 주소  value 주소  ptrptr 주소
	cout << **ptrptr << endl;  // 5

	return 0;
}
