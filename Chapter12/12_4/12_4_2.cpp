#include <iostream>
/* ���� �Ҹ���
	��ӱ������� �����ڴ� �ڽ� class�� �ڽ��� �����ڸ� �������
	�Ҹ��ڴ� ����Ҹ��ڸ� ����ϴ� ���� ����.
*/

using namespace std;

class Base 
{
public:
	~Base()
	{
		cout << "~Base()" << endl;
	}
};

class Derived : public Base
{
private:
	int* m_array; // dynamic memory allocation
public:
	Derived(int length)
	{
		m_array = new int[length];
	}

	~Derived()
	{
		cout << "~Derived()" << endl;
		delete[] m_array;
	}
};


int main()
{
	// �������� Ȱ��
	// ���� �θ� class�� 1���̰� �̸� ��ӹ޴� �ڽ� class�� ������ �̴�.
	// ���� �ڽ� class�� pointer�� �θ� class�� pointer�� ������ ����Ѵ�.

	// �ڽ� class�� pointer�� �����Ҵ�
	Derived* derived = new Derived(5);
	// �ڽ� class�� pointer�� �θ� class�� pointer�� �Ѱ���
	Base* base = derived;
	//�θ� class�� pointer�� ����
	delete base; // ~Base()�� ȣ���. �ڽ� class�� pointer delete���� ���� 

	return 0;
}
