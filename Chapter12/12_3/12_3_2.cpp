#include <iostream>
/* override, final, covariant return type 
	�θ� class���� child class�� ����� �� ��
	�Լ����� ���������� parameter �� �ٸ� ��� overriding �Ұ��� �ϴ�.

	overriding: ��� ���迡�� �θ� Ŭ������ �Լ��� �ڽ� Ŭ������ �������ϴ� ��
				�Լ���, �Ű�����, ��ȯ�� ������ ����
				��Ÿ�ӿ��� � �Լ��� ȣ��� �� �����ϹǷ� ���� ���ε�
	overloading: ���� Ŭ���� ������ ���� �̸��� �Լ��� �Ű������� �ٸ��� ���� �� �����ϴ� ��
				������ ������ � �Լ��� ȣ��� �� �����ϹǷ� ���� ���ε��̴�.
	*/
using namespace std;

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
	// ������ class B�� ��ӹ޴� class���� 
	// print()�� overriding �� ��
	// final�� ����ϸ� class C���� print()�� overriding �� �� ����.
	void print() final
	{
		cout << "B" << endl;
	}
};

class C : public B
{
public:
	virtual void print()
	{
		cout << "C" << endl;
	}
};

int main()
{
	A a;
	B b;
	
	A& ref = b;
	ref.print(); // A

	return 0;
}
