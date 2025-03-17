#include <iostream>
/* Derived된 class에 새로운 기능 추가하기 */
/*
	Base class의 m_value 변수값을 상속받은 Derived class에서
	변경하도록 할 수 있다.
*/
using namespace std;

class Base
{
protected:
	int m_value;
public:
	Base(int value)
		: m_value(value)
	{

	}


};

class Derived : public Base
{
public:
	Derived(int value)
		: Base(value)
	{
	
	}
	void setValue(int value)
	{
		Base::m_value = value;
		// do some work with the variables defined in Derived
		// 상위 class를 매번 거쳐야 하므로 성능이 떨어질 수도 있다.
	}
};


int main()
{

	return 0;
}
