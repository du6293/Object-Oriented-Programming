#include <iostream>
#include <cassert>
/*  converting constructor(��ȯ ������)
	explicit: �����ڰ� converting constructor�ν� �������� ���ϰ� ��. 
	delete: Ư�� �����ڸ� ������� ���ϰ� ��������
*/
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

	Fraction(char) = delete;

	// Constructor
	explicit Fraction(int num = 0, int den = 1)
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

void doSomething(Fraction frac)
{
	cout << frac << endl;
}

int main()
{
	Fraction frac(7);
	// class ������ Fraction(char) = delete;
	// �� ������ ������ ����� �� ����.
	//Fraction frac2('c');

	// explicit�� ������ �տ� �پ��� ������ 
	// parameter�� Fraction(7) Ȥ�� frac�� �־��־�� ��
	doSomething(Fraction(7));

	//doSomething(7);

	return 0;
}
