#include <iostream>
#include <cassert>
/*  converting constructor(변환 생성자)
	explicit: 생성자가 converting constructor로써 동작하지 못하게 함. 
	delete: 특정 생성자를 사용하지 못하게 지워버림
*/
using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;
	/*
	// copy constructor를 private 영역으로 옮기면, 외부에서 copy constructor 호출 불가능
	Fraction(const Fraction& fraction)
		: m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << "Copy constructor called " << endl;
	}
	*/
public:

	Fraction(char) = delete;

	// Constructor
	explicit Fraction(int num = 0, int den = 1)
		: m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}

	// copy constructor: 자기 자신과 동일한 class가 parameter로 들어오는 것
	Fraction(const Fraction& fraction)
		: m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << "Copy constructor called " << endl;
	}

	// output 연산자 overloading
	friend std::ostream& operator << (std::ostream& out, const Fraction& f)
	{
		out << f.m_numerator << " / " << f.m_denominator << endl;
		return out;
	}
};

void doSomething(Fraction frac)
{
	cout << frac << endl;
}

int main()
{
	Fraction frac(7);
	// class 내에서 Fraction(char) = delete;
	// 로 지웠기 때문에 사용할 수 없다.
	//Fraction frac2('c');

	// explicit이 생성자 앞에 붙었기 때문에 
	// parameter로 Fraction(7) 혹은 frac을 넣어주어야 함
	doSomething(Fraction(7));

	//doSomething(7);

	return 0;
}
