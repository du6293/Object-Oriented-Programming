#include <iostream>
#include <limits> 

#define PRICE_PER_ITEM 30
#include "my_constants.h"

/*
	macro�� ������� �ſ� ����� ����� ������ �ſ� �б� ������ 
	c++���� �� ���� �ʴ´�.
	magic number ���� ������� �ʴ´�.  
	���� Ư�� ������ ���� �Ҵ����ְ� �� ���� ���� ����Ѵ�.  
*/

using namespace std;

void printNumber(const int my_number)
{
	cout << my_number << endl;
}


int main()
{
	/* 
	constexpr: compile time�� ���� ������ �����Ǵ� ������ ���� 
	compile time�� üũ�ϰڴٴ� �� 
	runtime�� �����Ǵ� ����� constexpr�� ����� �� ����. 
	*/
	
	int number;
	cin >> number;	

	const int special_number(number); // run time �� �����Ǵ� ��� 
	/* compile constant */
	number = 123; // compile time �� �����Ǵ� ��� 
	
	const double gravity{9.8}; // compile time �� �����Ǵ� ��� 
	printNumber(123);
	
	int num_item = 123;
	int price = num_item * PRICE_PER_ITEM;
	
	double radius;
	cin >> radius;
	double circumference = 2.0 * radius * constants::pi;
	cout << circumference << endl;
	
	return 0;
}
