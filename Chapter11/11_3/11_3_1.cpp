#include <iostream>
/*  Derived �� class���� ���� ���� 

	Mother class�� constructor ȣ�� 
	-> Mother class�� member variable (public or protected) initialization
	-> Child class�� constructor ȣ��
	-> Child class�� member variable (public or protected) initialization
*/
using namespace std;

class Mother
{
public:
	int m_i;

	Mother()
		:m_i(1)
	{
		cout << "Mother construction " << endl;
	}
};

// Child �� Mother�κ��� derive�� class
class Child : public Mother
{
public:
	double m_d;
public:
	Child()
		: m_d(1.0)
	//	: m_i(1024) derive�� class�̹Ƿ� ������ ���� �ʱ�ȭ �Ұ�
	{
		// derive�� class�̹Ƿ� ������ ���� ������� ���� �ʱ�ȭ ����
		m_i = 10;
		this -> m_i = 11;
		Mother::m_i = 12;
		this -> Mother::m_i = 13;

		cout << "Child construction " << endl;
	}
};

int main()
{
	// Mother construction�� ���� ȣ��ǰ� ����
	// m_i�� 1���� �ʱ�ȭ �ǰ�
	// Child construction�� ȣ��ǰ� ����
	// m_d�� 1.0���� ȣ��ȴ�.
	Child c1; 

	return 0;
}
