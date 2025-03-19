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
	// constructor ȣ�� ����: �θ� class -> �ڽ� class
	// destructor ȣ�� ����: �ڽ� class -> �θ� class

	// Derived class�� �Ҹ��ڰ� ȣ��ǰ� ����
	// Base class�� �Ҹ��ڰ� ȣ���
	Derived derived(5);

	return 0;
}
