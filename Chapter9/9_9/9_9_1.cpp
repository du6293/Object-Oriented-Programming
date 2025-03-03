#include <iostream>
#include <cassert>
/* copy constructor (복사 생성자), 
   copy initialization (복사 초기화), 
   Return Value Optimization */
using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;
public:
	// Constructor
	Fraction(int num = 0, int den = 1)
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

int main()
{
	Fraction frac(3, 5);

	// copy constructor
	Fraction fr_copy(frac);

	cout << frac << " " << fr_copy << endl;

	return 0;
}
