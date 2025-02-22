#include <iostream>
/* Constructor (생성자) 
	- instance가 construct 될 때 자동으로 호출되는 함수이다.
	- constructor가 없으면 instance 선언을 하지 못하기 때문에
	  class 내 별도로 constructor를 선언되어 있지 않아도 compiler가
	  자동으로 default constructor를 만들어준다.
	- constructor 함수에 파라미터가 아무것도 없는 
	  default constructor인 경우에는 ()를 빼야 함
	- constructor 함수에 파라미터가 있다면 
	  fir처럼 괄호를 빼서 선언하면 오류 발생
	- uniform initialization은 main 문에서 class를 선언할 때
	  private 영역에 있는 변수들의 type 변환을 허용하지 않는다.
	- direct initialization은 main 문에서 class를 선언할 때
	  private 영역에 있는 변수들의 type 변환을 허용한다.

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
	// parameter가 여러 개인 constructor를 선언하면 default constructor가 생성되지 x
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
	// 생성자 생성(class 내 생성자가 선언되어 있다면) or 
	// class instance 생성(class 내 생성자가 선언되어 있지 않다면)
	
	// 원래 생성자도 함수이기 때문에 frac()으로 선언해도 됨
	// constructor 함수에 파라미터가 아무것도 없는 default constructor인 경우에는 ()를 빼야 함
	// constructor 함수에 파라미터가 있다면 아래 line과 같이 선언하면 오류 발생
	//Fraction frac; 
	//frac._numerator = 0;
	//frac._denominator = 1;

	Fraction one_thirds = {1,3}; // uniform initialization
	//Fraction one_thirds(1.0, 3.0); // direct initialization
	one_thirds.print(); 


	return 0;
}
