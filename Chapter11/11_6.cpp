#include <iostream>
/* Derived�� class�� ���ο� ��� �߰��ϱ� */
/*
	Base class�� m_value �������� ��ӹ��� Derived class����
	�����ϵ��� �� �� �ִ�.
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
		// ���� class�� �Ź� ���ľ� �ϹǷ� ������ ������ ���� �ִ�.
	}
};


int main()
{

	return 0;
}
