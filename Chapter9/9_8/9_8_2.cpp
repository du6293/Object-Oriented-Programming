#include <iostream>
/* ����ȯ(static_cast, typecasts)�� overloading �ϱ� */
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
	int getCents() { return m_cents; }
	void setCents(int cents) { m_cents = cents; }
	// int type���� type casting �ϴ� function overloading
	operator int()
	{
		cout << "cast here" << endl;
		return m_cents;
	}
};

void printInt(const int& value)
{
	cout << value << endl;
}

// Dollar -> Cents�� ��ȯ
class Dollar
{
private:
	int m_dollars;
public:
	Dollar(const int& input) : m_dollars(input) {}
	operator Cents()
	{
		cout << "cast here first " << endl;
		return Cents(m_dollars * 100);
	}
};


int main()
{
	Dollar dol(2);
	Cents cents = dol;
	printInt(cents);

	return 0;
}
