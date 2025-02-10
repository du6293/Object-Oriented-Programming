#include <iostream>
#include "1.11.h"
/*
한번 선언된 함수는 다른 곳에서 다시 사용하고 싶다.
그래서 코드가 너무 길어지는 것을 막기 위해 header file을 만들어준다. 
*/
 
using namespace std;



int main()
{
	cout << add(1,2) << endl;
	cout << mul(1,2) << endl;
	cout << sub(1,2) << endl;
	
	
	return 0; 
	
}


