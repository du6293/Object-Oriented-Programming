#include <iostream>
/* anonymous ��ü (�͸� ��ü) 
	��ü�� ����� �� �̸��� ���� ������ ������� �ʰ�
	�ٷ� ����ϴ� ��ü
*/
using namespace std;

class A
{
public:
	int m_value;

	A(const int& input)
		: m_value(input)
	{
		cout << "Constructor" << endl;
	}

	A()
	{
		cout << "Constructor" << endl;
	}
	~A()
	{
		cout << "Destructor" << endl;
	}
	void printDouble()
	{
		cout << m_value * 2 << endl;
	}
};


int main()
{
	A a(1);
	a.printDouble();

	A(1).printDouble();
	return 0;
}
