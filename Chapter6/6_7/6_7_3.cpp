#include <iostream>
#include <cstddef>

using namespace std;
/*
 파라미터로 넘어오는 변수는 여기서 다시 선언이 되고 
 argument로 들어온 변수에 들어있는 값이 복사가 되는 것
 따라서 main함수의 ptr 변수값(포인터주소) doSomething함수의 ptr변수에 복사됨. 
 doSomething 함수의 ptr 변수의 주소와 main 함수의 ptr 변수의 주소가 다르다.
 두 ptr 변수의 내용은 같다.

 함수가 호출될 때 stack frame이 생성됨.
 함수 내부에서 사용되는 파라미터는 stack에 별도로 생성된다.
 따라서 두 변수의 주소가 다른 이유는 같은 변수를 공유하는 게 아니라
 함수 호출 시 새로운 지역변수 ptr이 생성된 것이다.
 */
void doSomething(double *ptr)
{
	if (ptr != nullptr)
	{
		// do something useful
		cout << *ptr << endl;
	}
	else
	{
		// do nothing with ptr
		cout << "Null ptr, do nothing" << endl;
	}
	cout << "address of pointer variable in doSomething() " << &ptr << endl;
}


int main()
{
	//double *ptr = NULL; // C-style
	//double *ptr = 0; // C-style
	double* ptr{ nullptr }; // modern c++
	double d = 123.4;

	doSomething(ptr);
	doSomething(nullptr);

	doSomething(&d);

	ptr = &d;
	doSomething(ptr);

	// 여기엔 nullptr만 넣을 수 있다.
	// 따라서 nullptr만 받아야 하는 파라미터가 있을 때 사용한다. 
	std::nullptr_t nptr;

	cout << "address of pointer variable in main() " << &ptr << endl;

	return 0;
}
