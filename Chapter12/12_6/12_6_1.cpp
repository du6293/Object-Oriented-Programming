#include <iostream>
/* 
	����(�Լ�) ǥ (Virtual Tables) 
	�������� ����� �� ��� ������ ���� virtual function�� ����
	table�� ����� ����ϰ� �ȴ�.

	virtual function�� ����Ǹ�, copiler�� virtual function�� table�� ���� ��
	���� ���ε��� �Ѵ�.

	Case 1: �θ� class�� ��ü ���� (Base base)
	virtual function�� ���� class(Base)�� ��ü(base)�� �������ְ�
	�� ��ü�� class�� virtual method�� ȣ���ϸ�
	�������ε����� ���� ȣ���ϴ� �� �ƴ϶� 
	�ش� class�� vitrual function pointer(*_vptr)�� �����
	virtual function table(Base VTable)�� ���� �ش� virtual function�� type�� ���� function pointer(fun1())�� ã��
	�׸��� �� function pointer�� ����Ű�� class method(virtual fun1())�� �ش� class�� ã�ư��� ������
	���� Base class -> virtual function table -> Base class �ڱ� �ڽ��� ���Ƽ� ���� ����

	Case 2: �ڽ� class�� ��ü ���� (Derived derived)
	�ڽ� class ���� virtual table�� ���� vitrual function pointer(*_vptr)�� ����
	�̶� virtual function pointer�� ����� �θ� class�� virtual function pointer�� ����.
	�θ� class�κ��� overriding�� function(func1)�� �ִٸ� �ش� virtual function�� type�� ���� function pointer(fun1())�� ã��
	�׸��� �� function pointer�� ����Ű�� class method(virtual fun1())�� �ش� �ڽ� class�� ã�ư��� ������.
	���� Derived class -> virtual function table -> Derived class �ڱ� �ڽ��� ���Ƽ� ���� ����
	�θ� class�κ��� overrinding ���� ���� �θ� class�� function(func2)�� ȣ���ؾ� �Ѵٸ� �ٷ� �θ� class�� func2�� ȣ����

	�ڽ� class�κ��� ������ ��ü�� �θ� class�� pointer�� reference�� ����־ 
	virtual table�� �����ϱ� ������ �������� Ȱ���� ȣ���� �� �ִ�. 

*/
using namespace std;

class Base
{
public:
	//Function Pointer *_vptr;
	virtual void fun1() {};
	virtual void fun2() {};
};

class Der : public Base
{
public:
	//FunctionPointer *_vptr;
	virtual void fun1() {};
	// void fun3() {};
};

int main()
{


	return 0;
}
