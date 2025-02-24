#include <iostream>

/* static member variable*/

using namespace std;

class Something
{
public:
	// class 내 member variable인 variable은 initialize할 수 없다.
	// 단 const가 붙으면 초기화 가능
	// constexpr: compile-time에 값이 결정됨
	// design pattern 중 single turn에서 주로 static constexpr를 많이 사용한다.
	static constexpr int _value = 1 ;
};

// class 내 const로 선언되었기 때문에 주석처리
//int Something::_value = 1;

int main()
{
	// Something class의 instance를 생성해주기 전
	cout << &Something::_value << " " << Something::_value << endl;

	Something st1;
	Something st2;

	// st1, st2의 member variable의 메모리 주소가 동일하다.
	//st1._value = 2;

	// st1과 st2의 memory address와 variable 값이 같다.
	cout << &st1._value << " " << st1._value << endl;
	cout << &st2._value << " " << st2._value << endl;

	//st1._value = 1024;

	// Something class의 instance를 생성해주고 난 후
	cout << &Something::_value << " " << Something::_value << endl;

	// Something class의 instance를 생성해주기 전과 후의 memory address가 동일하다.
	// member variable가 static으로 선언되었기 때문
	return 0;
}
