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

	cout << s1.getValue() << endl;
	//cout << s1.s_value << endl;
	
	// (좌변) Something이라는 class의 member function(temp)의 pointer를 가져온다는 의미
	// (우변) Something이라는 class에 속해있는 temp라는 member function 이라는 의미
	int (Something::*fptr1)() = &Something::temp;

	// 포인터 fptr 위치에 있는 함수 temp를 실행시킬 때 
	// s2라는 instance의 point를 넘겨주고
	// s2 instance의 this pointer를 가져다가 거기서 사용하는 형태로 동작
	cout << (s2.*fptr1)() << endl;

	// (좌변) Something이라는 class의 member function(getValue)의 pointer를 가져온다는 의미
	// 이 때 static 함수는 특정 instance와 상관없이 실행을 시킬 수 있는 함수이므로 
	// class 지정을 해주지 않아도 된다.
	// (우변) Something이라는 class에 속해있는 temp라는 member function 이라는 의미
	int (*fptr2)() = &Something::getValue;
	cout << fptr2() << endl;

	return 0;
}
