#include <iostream>
/* derivede�� class���� ������ �ʱ�ȭ */
using namespace std;

class A
{
public:
	A(int a)
	{
		cout << "A: " << a << endl;
	}
	~A()
	{
		cout << "Destructor A " << endl;
	}
};

class B : public A
{
public:
	B(int a, double b)
		: A(a)
	{
		cout << "B: " << b << endl;
	}
	~B()
	{
		cout << "Destructor B " << endl;
	}

};

class C : public B
{
public:
	C(int a, double b, char c)
		: B(a, b)
	{
		cout << "C: " << c << endl;
	}
	~C()
	{
		cout << "Destructor C " << endl;
	}
};

int main()
{
	// ���� ����: A -> B -> C
	// �Ҹ� ����: C -> B -> A
	C c(1024, 3.14, 'a');

	
	return 0;
}
