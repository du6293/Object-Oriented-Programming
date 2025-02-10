/*
자료형의 크기에 따라
사용할 수 있는 메모리 크기에 제한이 있다.
표현할 수 있는 숫자의 범위에 제한이 있다. 
*/

#include <iostream>
#include <cmath>
#include <limits> // compiler에게 특정 자료형이 표현할 수 있는 가장 큰 숫자를 알려주는 라이브러리 

int main(void){
	
	using namespace std;
	
	unsigned int i = -1;
	cout << i << endl;
	
	int j = 22 / 4;
	cout << j << endl; 
	cout << (float) 22 / 4 << endl;
	
	
	return 0;
} 
