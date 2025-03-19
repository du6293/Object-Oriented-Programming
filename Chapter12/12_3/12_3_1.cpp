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
	virtual void print() const
	{
		cout << "A" << endl;
	}
};

class B : public A
{
public:

	// class A���� ��� �� �Լ��� class B���� ����Ǿ� �ִ� ��� 
	// �Լ� �� ���� override�� ����ؼ� override�Ǿ��ٰ� ������ �ȴ�.
	void print() const override
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
