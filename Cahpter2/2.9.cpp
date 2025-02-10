#include <iostream>
#include <limits> 

#define PRICE_PER_ITEM 30
#include "my_constants.h"

/*
	macro는 디버깅이 매우 힘들고 상수의 범위가 매우 넓기 때문에 
	c++에서 잘 쓰지 않는다.
	magic number 또한 사용하지 않는다.  
	따라서 특정 변수에 값을 할당해주고 그 변수 값을 사용한다.  
*/

using namespace std;

void printNumber(const int my_number)
{
	cout << my_number << endl;
}


int main()
{
	/* 
	constexpr: compile time에 값이 완전히 결정되는 상수라는 것을 
	compile time에 체크하겠다는 뜻 
	runtime에 결정되는 상수는 constexpr를 사용할 수 없다. 
	*/
	
	int number;
	cin >> number;	

	const int special_number(number); // run time 에 결정되는 상수 
	/* compile constant */
	number = 123; // compile time 에 결정되는 상수 
	
	const double gravity{9.8}; // compile time 에 결정되는 상수 
	printNumber(123);
	
	int num_item = 123;
	int price = num_item * PRICE_PER_ITEM;
	
	double radius;
	cin >> radius;
	double circumference = 2.0 * radius * constants::pi;
	cout << circumference << endl;
	
	return 0;
}
