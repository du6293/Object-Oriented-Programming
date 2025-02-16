#include <iostream>

/* 참조 변수(reference variable) */

using namespace std;

int main()
{
	int value = 5;
	int* ptr = nullptr;
	ptr = &value;

	// 참조변수 선언
	int& ref = value; // value가 차지하고 있는 메모리를 ref가 사용하게 됨
						// ref와 value의 메모리 주소는 같다.

	cout << ref << endl;
	ref = 10; // *ptr = 10 과 같다. value 변수 값이 10으로 바뀐다. 
	cout << value << " " << ref << endl;

	// 변수 value, ref, ptr 변수값, ptr 변수 주소 확인
	cout << &value << " " << &ref << " " << ptr << " " << &ptr << endl;


	return 0;
}
