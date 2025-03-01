#include <iostream>
/* 산술 연산자 오버로딩 (overloading) 하기 

	[overloading 불가능한 연산자]
	?: 조건 연산자
	:: scope 연산자
	sizeof
	. member selection
	.* member pointer selection
	^ XOR 연산자의 경우 우선순위가 매우 낮다.
	overlaoding을 권장하지는 않지만,
	굳이 한다면 ()로 싸서 overloading 해야 한다.

	아무리 오버로딩으로 연산자를 만들어 주더라도
	기존 연산자의 우선순위는 항상 일정하게 적용된다.

	[member function으로만 overloading 해야 하는 연산자] 
	= 대입연산자  
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
	// 외부에서 access 할 수 있는 funciton
	int getCents() const
	{
		return m_cents;
	}
	int& getCents() 
	{
		return m_cents;
	}
	// case3. class 내에서 definition하고 friend로 overloading 하는 법  
	friend Cents operator + (const Cents& c1, const Cents& c2)
	{
		return (c1.getCents() + c2.getCents());
	}

};



int main()
{
	Cents cents1(6);
	Cents cents2(8);

	// Cents(6): anonymous object
	cout << (cents1 + cents2 + Cents(6) + Cents(10) + Cents(10)).getCents() << endl;

	return 0;
}
