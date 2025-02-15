#include <iostream>
#include <typeinfo>

using namespace std;

struct Something	// 4 * 4 = 16 bytes
{
	int a, b, c, d;
};

int main()
{
	int x = 5;
	double d = 1.0;

	// 이중 포인터나 삼중포인터의 경우 특정 type 지정 가능
	// typedef int* int;
	
	// 포인터 변수
	// 초기화를 해주는 것이 좋다. 
	// x의 주소가 ptr_x에 담긴다.
	int *ptr_x = &x; // 포인터 변수를 변수 x에 연결
	double* ptr_d = &d; // 포인터 변수를 변수 y에 연결
	Something ss;
	Something* ptr_s;

	cout << ptr_x << endl; // x의 주소
	cout << *ptr_x << endl;// x변수값
	cout << typeid(ptr_x).name() << endl;
	cout << sizeof(x) << endl;
	// x86 기준 포인터 변수는 type과 상관없이 4bytes 이다.
	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
	cout << endl;
	
	cout << ptr_d << endl;
	cout << *ptr_d << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;
	cout << endl;

	cout << sizeof(Something) << endl; // 16 bytes
	cout << sizeof(ptr_s) << endl; // 포인터 변수의 크기: 4 bytes
	
	return 0;
}
