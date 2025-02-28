#include <iostream>
/* friend �Լ��� class 
	������ overloading �� friend�� ����ؼ� encapsulate�� �Ѵ�.
*/
using namespace std;

// class A�� ���漱�����ش�.
class A; 

class B
{
private:
	int m_value = 2;
public:
	// class A�� �����Ѵٴ� �� �� �� ����
	void doSomething(A& a);

};

class A 
{
private:
	int m_value = 1;
	// class B�� member �Լ��� doSomething �Լ��� �����Ѵٴ� �� �� �� ����
	friend void B::doSomething(A& a);
};

// class B�� doSomething member�Լ��� �ܺο��� ���� 
void B::doSomething(A& a)
{
	cout << a.m_value << endl;
}


int main()
{
	A a;
	B b;
	b.doSomething(a);

	return 0;
}
