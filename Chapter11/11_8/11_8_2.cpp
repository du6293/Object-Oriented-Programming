#include <iostream>
/* ��ӹ��� �Լ��� ���߱� 
	��� ���� ���� ������� ���ϵ��� ���� ���
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

	// Base �ȿ����� protected������ 
	// Derived �ȿ����� public�� �� 
	using Base::m_i; 
	// Base �ȿ����� public������
	// Derived �ȿ����� private�� ��
private:
	using Base::print;

	// Base�κ��� �������� print()�� Derive ���� ������
private:
	void print() = delete;
};


int main()
{
	Derived derived(7);
	Base base(5);

	// Derived class �ȿ��� public���� �ٲ�����Ƿ� main������ ����� �� �ִ�.
	derived.m_i = 1024;
	
	// Derived class �ȿ��� delete�Ǿ����Ƿ� main������ ����� �� ����.
	//derived.print();
	
	// Base class �ȿ����� public�̹Ƿ� main������ ����� �� �ִ�.
	base.print();

	return 0;
}
