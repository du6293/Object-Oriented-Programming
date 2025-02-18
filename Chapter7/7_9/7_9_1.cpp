#include <iostream>
/* 함수 포인터 (Function Pointers) */
using namespace std;

int func(int)
{
	return 5;
}

int goo(int) 
{
	return 10;
}

int main()
{
	// 이 함수가 어느 memory address에 있는 지 확인하고
	// 해당 memory address에 있는 함수를 실행
	//func();

	// 함수 포인터 선언 및 초기화
	int (*fcnptr)(int) = func;

	cout << fcnptr(1) << endl;

	// 함수 포인터를 다른 함수의 포인터로 바꾸기 가능하다 
	fcnptr = goo; 

	cout << fcnptr(1) << endl;

	return 0;
}
