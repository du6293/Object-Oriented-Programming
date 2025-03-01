#include <iostream>
/* 비교 연산자(==, !=, >, >=) 오버로딩 하기 */
using namespace std;


class Cents
{
private:
	int m_cents;
public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	// << 연산자 overloading 추가
	friend std::ostream& operator<<(std::ostream& out, const Cents& cents)
	{
		out << cents.m_cents;
		return out;
	}
	
	friend bool operator == (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents == c2.m_cents;
	}

	friend bool operator != (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents != c2.m_cents;
	}

};


int main()
{
	Cents cents1(6);
	Cents cents2(6);

	if (cents1 == cents2)
		cout << "Equal " << endl;
	

	return 0;
}
