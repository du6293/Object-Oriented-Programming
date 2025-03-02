#include <iostream>

/* 주소에 의한 인수 전달
(Passing Arguments by Address, Call By Address) 
함수의 매개변수로 포인터 변수를 전달 = 변수의 주소를 전달 
호출 시 변수의 주소를 전달해야 함 
*/

using namespace std;

void foo(int* ptr)
{
	// main의 ptr 변수의 주소와 foo 함수의 ptr 변수의 주소가 다르다
	cout << *ptr << " " << ptr << " " << &ptr << endl;
}

int main()
{
	int value = 5;

	cout << value << " " << &value << endl; // 5 010FFEC8

	int* ptr = &value;
	cout << &ptr << endl;	// 010FFED0
	foo(ptr);	// 5 010FFEC8 010FFECC
	foo(&value);	//  5 010FFEC8 010FFECC  주소를 전달 
	// foo(5); 리터럴은 주소가 없기 때문에 함수 파라미터에 const를 붙이더라도 바로 넣어줄 수 x

	return 0;
}
