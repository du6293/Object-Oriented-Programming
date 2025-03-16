#include <iostream>
/* derivede�� class���� ������ �ʱ�ȭ */
using namespace std;

class Mother
{
public:
	int m_i;

	Mother(const int& i_in = 0)
		:m_i(i_in)
	{
		cout << "Mother construction " << endl;
	}
};

// Child �� Mother�κ��� derive�� class
// Mother class�� member variable�� ��� �ޱ� ������
// memory �Ҵ� ũ�Ⱑ Ŀ����.
class Child : public Mother
{
public:
	double m_d;
	//int m_temp;
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

	Child c1;

	cout << sizeof(Mother) << endl; // 4 byte
	// Mother size + Child size
	cout << sizeof(Child) << endl; // 4 byte + 12 byte + 12 byte (padding)

	return 0;
}
