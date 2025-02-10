//리터럴 (Literal):
//피연산자(Operand):
//단항(unary), 이항(binary), 삼항(ternary) 

#include <iostream>


using namespace std;

int main()
{
	int x = 50; // x는 변수, 2는 리터럴, = 는 대입연산자 assignment 
	cout << x + 2 << endl; // + 는 피연산자 
	cout << -x << endl;	// 단항 연산자  
	
	int y = (x > 0) ? 1: 2;	// 삼항 연산자  
	cout << y << endl;  
	cout << "My Home" << endl; // 문자도 리터럴이다. 
	
}
