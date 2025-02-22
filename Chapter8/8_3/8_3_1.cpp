#include <iostream>
/* Constructor (������) 
	- instance�� construct �� �� �ڵ����� ȣ��Ǵ� �Լ��̴�.
	- constructor�� ������ instance ������ ���� ���ϱ� ������
	  class �� ������ constructor�� ����Ǿ� ���� �ʾƵ� compiler��
	  �ڵ����� default constructor�� ������ش�.
	- constructor �Լ��� �Ķ���Ͱ� �ƹ��͵� ���� 
	  default constructor�� ��쿡�� ()�� ���� ��
	- constructor �Լ��� �Ķ���Ͱ� �ִٸ� 
	  firó�� ��ȣ�� ���� �����ϸ� ���� �߻�
	- uniform initialization�� main ������ class�� ������ ��
	  private ������ �ִ� �������� type ��ȯ�� ������� �ʴ´�.
	- direct initialization�� main ������ class�� ������ ��
	  private ������ �ִ� �������� type ��ȯ�� ����Ѵ�.

*/
using namespace std;

class Fraction
{
private:
	int _numerator ;
	int _denominator ;

public:
	Fraction() {}
	// Constructor
	//Fraction()
	//{
	//	_numerator = 1;
	//	_denominator = 1;
	//	cout << "Fraction() constructor" << endl;
	//}
	
	// Constructor
	// parameter�� ���� ���� constructor�� �����ϸ� default constructor�� �������� x
	Fraction(const int& num_in, const int& den_in = 1)
	{
		_numerator = num_in;
		_denominator = den_in;
		cout << "Fraction() constructor" << endl;
	}

	void print()
	{
		cout << _numerator << " / " << _denominator << endl;
	}
};

int main()
{	
	// ������ ����(class �� �����ڰ� ����Ǿ� �ִٸ�) or 
	// class instance ����(class �� �����ڰ� ����Ǿ� ���� �ʴٸ�)
	
	// ���� �����ڵ� �Լ��̱� ������ frac()���� �����ص� ��
	// constructor �Լ��� �Ķ���Ͱ� �ƹ��͵� ���� default constructor�� ��쿡�� ()�� ���� ��
	// constructor �Լ��� �Ķ���Ͱ� �ִٸ� �Ʒ� line�� ���� �����ϸ� ���� �߻�
	//Fraction frac; 
	//frac._numerator = 0;
	//frac._denominator = 1;

	Fraction one_thirds = {1,3}; // uniform initialization
	//Fraction one_thirds(1.0, 3.0); // direct initialization
	one_thirds.print(); 


	return 0;
}
