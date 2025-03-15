#include <iostream>
/*  Derived �� class���� ���� ���� 

	Mother class�� constructor ȣ�� 
	-> Mother class�� member variable (public or protected) initialization
	-> Child class�� constructor ȣ��
	-> Child class�� member variable (public or protected) initialization
*/
using namespace std;


// ����� ������ �̷������ ��� 
// A -> B -> C �� ���
class A
{
public:
	A()
	{
		cout << "A constructor " << endl;
	}

};

class B : public A
{
public:
	B()
	{
		cout << "B constructor " << endl;
	}
};

class C : public B
{
public:
	C()
	{
		cout << "C constructor " << endl;
	}
};


int main()
{
	C c; // constructor ȣ�� ����: A -> B -> C
	cout << endl;

	B b; // constructor ȣ�� ����: A -> B
	cout << endl;

	A a; // constructor ȣ�� ����: A

	return 0;
}
