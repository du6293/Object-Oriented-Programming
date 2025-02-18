#include <iostream>
#include <string>
/* Default Parameters (매개변수의 기본값) 
	default parameter값은 함수 overloading에 영향을 준다.
*/
using namespace std;

void print(int x)
{

}

void print(int x, int y = 10)
{

}

int main()
{
	print(10); // ambiguous 문제 발생
	
	return 0;
}
