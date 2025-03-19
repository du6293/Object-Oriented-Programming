#include <iostream>
/* virtual function�� polymorphism 
	virtual: �θ� class���� child class�� ����� �� 
	child class�� ������ �̸��� �Լ��� overriding �Ǿ� �ִ� ��Ȳ����
	�θ� class�� �Լ��� virtual�� ���̸� child class�� �Լ��� ����ȴ�. 

	compiler�� virtual�� ������ virtual table�� �����Ѵ�.
	virtual pointer�� ���� �ش� class�� vtable�� ����Ų��. 
*/

using namespace std;

// ���� ���� class overriding �Լ��� virtual�� �Ǹ� 
// �� ���� class overriding �Լ��� virtual ó�� �����Ѵ�.
// �� �� run-time�� � �Լ��� ȣ��� �� �����ȴ�. (���� ���ε�) 
class A
{
public:
	virtual void print()
	{
		cout << "A" << endl;
	}
};

class B : public A
{
public:
	void print()
	{
		cout << "B" << endl;
	}
};

class C :public B
{
public:
	void print()
	{
		cout << "C" << endl;
	}
};

class D : public C
{
public:
	void print()
	{
		cout << "D" << endl;
	}
};

int main()
{
	A a;
	a.print(); // A

	B b;
	b.print(); // B

	C c;
	c.print(); // C

	D d;
	d.print(); // D
	
	// B class ��ü b�� A class ref�� ���ε�
	A& ref = b; // ref�� b�� ����Ŵ
	ref.print(); // B, ref�� A type������ B class�� print() ȣ��
	
	B& ref = c;
	ref.print(); // C
	
	return 0;
}
