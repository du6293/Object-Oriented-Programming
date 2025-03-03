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


int main()
{
	Cents cents(7);

	int value = (int)cents;
	value = int(cents);
	value = static_cast<int>(cents);

	printInt(cents);

	return 0;
}
