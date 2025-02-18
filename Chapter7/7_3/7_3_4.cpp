#include <iostream>
#include <cmath>
/* 참조에 의한 인수 전달 (Call by Reference) */

using namespace std;

// 2중 3중 포인터의 경우 새로운 type을 지정해서 사용하는 것을 권장
typedef int* pint;

void foo(int *&ptr) // (int*) &ptr = pint &ptr과 같다
{
	cout << ptr << " " << &ptr << endl;
}

int main()
{
	int x = 5;
	int* ptr = &x;	// pint ptr과 같다

	cout << ptr << " " << &ptr << endl;
	foo(ptr);

	return 0;
}
