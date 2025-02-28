#include <iostream>
/* friend �Լ��� class 
	������ overloading �� friend�� ����ؼ� encapsulate�� �Ѵ�.
*/
using namespace std;

// class B�� ���漱�����ش�.
class B; 

class A 
{
private:
	int m_value = 1;
	// friend�� ���� prototype ��������
	friend void doSomething(A& a, B& b);
};

class B
{
private:
	int m_value = 2;
	friend void doSomething(A& a, B& b);
};

void doSomething(A& a, B& b)
{
	cout << a.m_value << " " << b.m_value << endl;
}

int main()
{
	A a;
	doSomething(a);

	return 0;
}
