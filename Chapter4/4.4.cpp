#include <iostream>

using namespace std;
/*
	auto: 상황에 따라 자료형을 자동으로 추론하도록 함
*/


/*	
	parameter로 int 2개가 들어오므로 당연히 결과값은 int
	따라서 return type은 auto로 주어도 됨.
	하지만 auto를 parameter의 type으로 줄 수 없음.
	return 할 때 자료형을 double로 바꾸면 전체적인 return value의 type은 int에서 double로 바뀜.
*/

/* 
	trailing return type 지정도 가능하다. 
	auto 함수(parameter) -> return type
*/
auto add(int x, int y) -> int;
auto add(int x, int y) -> double;

int add(int x, int y);
double add(int x, int y);

auto add(int x, int y) -> int 
{
	return x + (double)y; // int + double = double
}



int main()
{
	/* 한 줄에 중복된 정보가 있음
		해당 자료형이 int, 정수형이 될 거라고 중복된 정보가 포함됨
	*/
	// int a = 123;
	/* auto는 사용 시 반드시 초기화를 해주어야 한다. */
	auto a		= 123;				// int 
	auto d		= 123.0;				// double
	auto c		= 1 + 2.0;			// double
	auto result = add(1, 2);	// double

	return 0;
}
