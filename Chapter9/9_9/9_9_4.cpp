#include <iostream>
#include <cassert>
/* copy constructor (���� ������), 
   copy initialization (���� �ʱ�ȭ), 
   Return Value Optimization */
using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;
	/*
	// copy constructor�� private �������� �ű��, �ܺο��� copy constructor ȣ�� �Ұ���
	Fraction(const Fraction& fraction)
		: m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << "Copy constructor called " << endl;
	}
	*/
public:
	// Constructor
	Fraction(int num = 0, int den = 1)
		: m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}

	// copy constructor: �ڱ� �ڽŰ� ������ class�� parameter�� ������ ��
	Fraction(const Fraction& fraction)
		: m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << "Copy constructor called " << endl;
	}

	// output ������ overloading
	friend std::ostream& operator << (std::ostream& out, const Fraction& f)
	{
		out << f.m_numerator << " / " << f.m_denominator << endl;
		return out;
	}
};

Fraction doSomething()
{
	Fraction temp(1, 2);
	cout << &temp << endl;
	return temp;
}

int main()
{
	Fraction result = doSomething();
	// Debug mode������ doSomething �Լ� �� temp��ü�� �ּҿ�
	// result ��ü�� �ּҰ� �ٸ���.
	// ���� copy constructor�� ��µȴ�.

	// ������ release mode������ temp ��ü�� result ��ü�� �ּҰ� ����. 
	// ���� copy constructor�� ��µ��� �ʴ´�.
	cout << &result << endl;
	cout << result << endl;

	return 0;
}
