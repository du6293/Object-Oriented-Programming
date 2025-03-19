#include <iostream>
/* virtual function�� polymorphism */

using namespace std;

class A
{
public:
	void print()
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
	/*
	// B class ��ü b�� A class ref�� ���ε�
	A& ref = b; // ref�� b�� ����Ŵ
	ref.print(); // A, ref�� A type�̹Ƿ� A class�� print() ȣ�� -> ���� ���ε�  

	A& ref = c;
	ref.print(); // A

	A& ref = d;
	ref.print(); // A
	
	B& ref = d;
	ref.print(); // B
	*/
	C& ref = d;
	ref.print(); // C

	return 0;
}
