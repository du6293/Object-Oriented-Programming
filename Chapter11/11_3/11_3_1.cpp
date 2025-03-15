#include <iostream>
/*  Derived 된 class들의 생성 순서 

	Mother class의 constructor 호출 
	-> Mother class의 member variable (public or protected) initialization
	-> Child class의 constructor 호출
	-> Child class의 member variable (public or protected) initialization
*/
using namespace std;

class Mother
{
public:
	int m_i;

	Mother()
		:m_i(1)
	{
		cout << "Mother construction " << endl;
	}
};

// Child 는 Mother로부터 derive된 class
class Child : public Mother
{
public:
	double m_d;
public:
	Child()
		: m_d(1.0)
	//	: m_i(1024) derive된 class이므로 다음과 같이 초기화 불가
	{
		// derive된 class이므로 다음과 같은 방식으로 변수 초기화 가능
		m_i = 10;
		this -> m_i = 11;
		Mother::m_i = 12;
		this -> Mother::m_i = 13;

		cout << "Child construction " << endl;
	}
};

int main()
{
	// Mother construction이 먼저 호출되고 나서
	// m_i가 1으로 초기화 되고
	// Child construction이 호출되고 나서
	// m_d가 1.0으로 호출된다.
	Child c1; 

	return 0;
}
