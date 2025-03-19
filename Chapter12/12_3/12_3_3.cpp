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
	void print()
	{
		cout << "A" << endl;
	}
	virtual A* getThis() 
	{
		cout << "A::getThis()" << endl;
		return this;
	}
};

class B : public A
{
public:
	void print() 
	{
		cout << "B" << endl;
	}
	// class B�� class A�� ��ӹޱ� ������
	// class A���� getThis()�� A*�ӿ���
	// class B���� getThis()�� B*�̸� overriding�� �����ϴ�. 
	virtual B* getThis()
	{
		cout << "B::getThis()" << endl;
		return this;
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
	C c;
	
	// class A���� print() �տ� virtual�� �����Ƿ� �������ε�
	A& ref = b; // ref�� b�� ����Ŵ

	// b.getThis()�� B�� return�Ѵ�. 
	// ���� class B�� print()�� ����ȴ�.
	b.getThis()->print(); // B
	
	// class A���� getThis()�� virtual�� class B�� getThis()�� �������ε� ��
	// ���� ref.getThis()�� �ϸ� class B�� getThis()�� ������ �ȴ�.
	// ���� ���������� A�� pointer�� �ٲ� ������ class A�� print()�� ������ �ȴ�. 
	ref.getThis()->print(); // A

	cout << typeid(b.getThis()).name() << endl; // class B*
	cout << typeid(ref.getThis()).name() << endl; // class A*

	return 0;
}
