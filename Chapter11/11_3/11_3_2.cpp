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

	Mother(const int & i_in = 0)
		:m_i(i_in)
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
	//	: Mother(1024), m_d(1.0) // Mother class�� ���� constructor ȣ���ϰ� ���� Child constructor ȣ��
		: m_d(1.0), Mother(1024) // ������ �ٲ� compiler�� Mother class�� ���� constructor ȣ���ϰ� ���� Child constructor ȣ��
	{
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
