#include <iostream>

/* void 포인터 = generic pointer
	자료형과 상관없이 포괄적으로 포인터를 저장할 수 있다.
	다형성 구현할 때 사용하는 경우가 있다.
*/
using namespace std;

enum Type
{
	INT,
	FLOAT,
	CHAR,
};

int main()
{
	int i = 5;
	float f = 3.0;
	char c = 'a';

	void* ptr = nullptr;

	ptr = &i; 
	ptr = &f;
	//ptr = &c;

	Type type = FLOAT;

	cout << &f << " " << ptr << endl;
	//cout << *ptr << endl; // ptr이 void 형이므로 de-referencing 불가
	if (type == FLOAT)
	{
		cout << *static_cast<float*>(ptr) << endl; // type casting을 해주면 de-referencing 가능
	}
	else if (type == INT)
	{
		cout << *static_cast<int*>(ptr) << endl;
	}

	// 포인터 변수의 자료형이 void가 아니면 포인터 연산을 사용할 수 있음
	int* ptr_i = &i;
	cout << ptr_i << endl;
	cout << ptr_i + 1 << endl;

	// 포인터 변수의 자료형이 void이면 포인터 연산을 사용할 수 없다.
	cout << ptr << endl;
	//cout << ptr + 1 << endl;


	return 0;
}
