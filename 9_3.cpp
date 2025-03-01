#include <iostream>
/* ���� ������ (+,-,!) overloading �ϱ� */
using namespace std;

class Cents
{
private: 
	int m_cents;
public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	// << ������ overloading �߰�
	friend std::ostream& operator<<(std::ostream& out, const Cents& cents)
	{
		out << cents.m_cents;
		return out;
	}

	// 
	Cents operator - () const
	{
		return Cents(-m_cents);
	}
	bool operator !() const
	{
		return (m_cents == 0) ? true : false;

	}

};

int main()
{
	// instance ����
	Cents cents1(6);
	Cents cents2(0);

	// - oprator overloading
	// cout <<�� user define class�� ����� �� ����.
	// ���� class �� cout << �� overloading ���־�� �Ѵ�.
	cout << cents1 << endl;	 // 6
	cout << -cents1 << endl;	// -6
	cout << -Cents(-10) << endl; // 10
	cout << Cents(-10) << endl;  // -10

	// not operator (!) overloading
	// bool�� return �ϵ��� ��
	auto temp = !cents1;
	cout << cents1 << " " << cents2 << endl;   // 6(true) 0(false)
	cout << !cents1 << " " << !cents2 << endl; // 0(false) 1(true)
	
	return 0;
}
