#include <iostream>
/* 가상 소멸자
	상속구조에서 생성자는 자식 class의 자신의 생성자를 사용했음
	소멸자는 가상소멸자를 사용하는 것이 좋다.
*/

using namespace std;

class Base 
{
public:
	~Base()
	{
		cout << "~Base()" << endl;
	}
};

class Derived : public Base
{
private:
	int* m_array; // dynamic memory allocation
public:
	Derived(int length)
	{
		m_array = new int[length];
	}

	~Derived()
	{
		cout << "~Derived()" << endl;
		delete[] m_array;
	}
};


int main()
{
	// constructor 호출 순서: 부모 class -> 자식 class
	// destructor 호출 순서: 자식 class -> 부모 class

	// Derived class의 소멸자고 호출되고 나서
	// Base class의 소멸자가 호출됨
	Derived derived(5);

	return 0;
}
