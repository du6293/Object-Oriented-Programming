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

	Mother(const int & i_in = 0)
		:m_i(i_in)
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
	//	: Mother(1024), m_d(1.0) // Mother class로 가서 constructor 호출하고 나서 Child constructor 호출
		: m_d(1.0), Mother(1024) // 순서가 바뀌어도 compiler는 Mother class로 가서 constructor 호출하고 나서 Child constructor 호출
	{
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
