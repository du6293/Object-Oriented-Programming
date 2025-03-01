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

};

// case 1. 일반 함수로 overloading하는 법 - 출력값을 파라미터로 받도록 코드를 짜는 방법
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

	// i/o operator 도 연산자 overlaoding이 가능하다
	cout << sum.getCents() << endl;

	return 0;
}
