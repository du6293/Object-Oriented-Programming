#include <iostream>

/* 참조 변수(reference variable) */

using namespace std;

int main()
{
	int value = 5;
	
	// 참조변수는 선언 시 반드시 초기화 되어야 한다. 
	// 이 때 리터럴로 초기화는 안된다.
	// 변수로 초기화 해주어야 한다. 
	int& ref = value;
	
	// 단 const가 붙은 참조변수는 리터럴로 초기화 가능하다.  

	// const로 선언된 변수 y의 값을 참조변수에 넣을 땐 
	// 참조 변수 역시 const로 선언해야 한다. 
	const int y = 8;
	const int& ref = y;




	return 0;
}
