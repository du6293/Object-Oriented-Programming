#include <iostream>
/* anonymous 객체 (익명 객체) 
	객체를 사용할 때 이름이 붙은 변수를 사용하지 않고
	바로 사용하는 객체
	anonymous value는 r-value 처럼 동작한다
	anonymous 객체는 변수명이 없기 때문에 1번만 사용 가능하고 이후에 사라진다. 
*/
using namespace std;

class Cents
{
private:
	int m_cents;
public:
	Cents(int cents) 
	{
		m_cents = cents;
	}
	int getCents() const
	{
		return m_cents;
	}
};

Cents add(const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents());
}

int main()
{
	// add함수가 Cents를 return하므로 getCents() 사용 가능하다
	cout << add(Cents(6), Cents(8)).getCents() << endl;
	cout << int(6) + int(8) << endl;

	return 0;
}
