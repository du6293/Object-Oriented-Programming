#include <iostream>
/* 상속받은 함수를 감추기 
	상속 받은 것을 사용하지 못하도록 막는 방법
*/
using namespace std;

class Base
{
protected:
	int m_i;
public:
	Base(int value)
		: m_i(value)
	{}

	void print()
	{
		cout << "I'm base " << endl;
	}

};

class Derived : public Base
{
private:
	double m_d;
public:
	Derived(int value)
		: Base(value)
	{}

	// Base 안에서는 protected이지만 
	// Derived 안에서는 public이 됨 
	using Base::m_i; 
	// Base 안에서는 public이지만
	// Derived 안에서는 private가 됨
private:
	using Base::print;
};


int main()
{
	Derived derived(7);
	Base base(5);

	// Derived class 안에서 public으로 바뀌었으므로 main문에서 사용할 수 있다.
	derived.m_i = 1024;
	
	// Derived class 안에서 private로 바뀌었으므로 main문에서 사용할 수 없다.
	//derived.print();
	
	// Base class 안에서는 public이므로 main문에서 사용할 수 있다.
	base.print();

	return 0;
}
