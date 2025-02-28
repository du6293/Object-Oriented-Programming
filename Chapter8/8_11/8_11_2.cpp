#include <iostream>
/* static member function (정적 멤버 함수) */

/*
	this: 특정 instance의 주소를 받아서,
		그 instance에 속해 있는 member들의 address를 가져다 사용하게 함
*/
using namespace std;

class Something
{
public:
	static int s_value;
	int m_value;

public:
	// constructor 내에 member variable을 initialization해줄 때 
	// static variable은 initialization이 안된다.
	Something()
		: m_value(123)//, s_value(1024)
	{}

	// static member function는 instance 없이 호출되므로 this를 사용할 수 없다.
	// static member function은 instance variable에 접근할 수 없다.
	static int getValue()
	{
		return s_value;
		// 개별 객체에 속하는 변수이므로 static member function 함수에서 직접 접근할 수 없다.
		// return m_value;
	}
	// static이 아닌 일반 member function는 this를 사용할 수 있다.
	int temp()
	{
		return this -> s_value ;
	}
};

int Something::s_value = 1024;

int main()
{
	// static member function을 사용해서 static member 변수에 접근할 수 있다.
	cout << Something::getValue() << endl;

	// class 객체 2개 선언
	Something s1, s2;
	// s1과 s2의 mvalue의 memory address는 다르다.
	// 하지만 function의 memory address는 같다.
	// 따라서 function의 memory address는 특정 instance에 묶여있지 않다.




	return 0;
}
