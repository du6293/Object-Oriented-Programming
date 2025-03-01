#include <iostream>
/* ��� ������ �����ε� (overloading) �ϱ� 

	[overloading �Ұ����� ������]
	?: ���� ������
	:: scope ������
	sizeof
	. member selection
	.* member pointer selection
	^ XOR �������� ��� �켱������ �ſ� ����.
	overlaoding�� ���������� ������,
	���� �Ѵٸ� ()�� �μ� overloading �ؾ� �Ѵ�.

	�ƹ��� �����ε����� �����ڸ� ����� �ִ���
	���� �������� �켱������ �׻� �����ϰ� ����ȴ�.

	[member function���θ� overloading �ؾ� �ϴ� ������] 
	= ���Կ�����  
	[] array index 
	() parameter
	-> member selection operator
*/
using namespace std;

class Cents
{
private:
	int m_cents;
public:
	Cents(int cents = 0)
	{
		m_cents = cents;
	}
	// �ܺο��� access �� �� �ִ� funciton
	int getCents() const
	{
		return m_cents;
	}
	int& getCents() 
	{
		return m_cents;
	}

};

// case 1. �Ϲ� �Լ��� overloading�ϴ� �� - ��°��� �Ķ���ͷ� �޵��� �ڵ带 ¥�� ���
void add(const Cents& c1, const Cents& c2, Cents& c_out)
{
	c_out.getCents() = c1.getCents() + c2.getCents();
}

int main()
{
	Cents cents1(6);
	Cents cents2(8);

	Cents sum;
	add(cents1, cents2, sum);

	// i/o operator �� ������ overlaoding�� �����ϴ�
	cout << sum.getCents() << endl;

	return 0;
}
