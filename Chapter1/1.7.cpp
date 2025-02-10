#include <iostream>
// { }안에 선언된 변수는 { } 를 벗어나면 사라짐  
// { }의 역할은 영역을 구분해주는 것 

using namespace std;

// x 가 모든 다른 변수이다. >> 다른 메모리 주소값을 갖는다.  

int main()
{
	int x = 100;
	cout << x << " " << &x <<endl;
	
	
	
	{
		//int x = 2; 
		x = 2;  // 괄호 밖 변수 x와 memory address 동일 
		cout << x << " " << &x <<endl;
	}
	
	{
		int x = 5; 
		cout << x << " " << &x <<endl;
	}
	cout << x << " " << &x <<endl;

	return 0;
}
