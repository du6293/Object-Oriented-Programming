#include <iostream>
/* ���� ������ (++, --) overloading �ϱ� */
using namespace std;

class Digit
{
private: 
	int m_digit;
public:
	Digit(int digit = 0)
		:m_digit(digit) {}

	friend ostream& operator << (ostream& out, const Digit& d)
	{
		out << d.m_digit;
		return out;
	}

	// prefix
	Digit& operator ++ ()
	{
		++m_digit;
		return *this;
	}

	// postfix -> paramter�� int�� �־��־ ���� 
	Digit operator ++ (int)
	{
		Digit temp(m_digit);
		++(*this);
		return temp;
	}

};

int main()
{
	Digit d(5);

	cout << ++d << endl; // 6
	cout << d << endl; // 6

	cout << d++ << endl; // 6
	cout << d << endl; // 7
	return 0;
}
