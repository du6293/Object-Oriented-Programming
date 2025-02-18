#include <iostream>

/* 값에 의한 인수 전달 (Passing Arguments by Value, Call by Value) */

using namespace std;

void doSomething(int y)
{
	cout << "In func " << y << " " << &y << endl;
}

int main()
{
	doSomething(5);

	int x = 6;

	cout << "In main " << x << " " << &x << endl;
	doSomething(x); // x가 함수로 전달되는 게 아니라 
					// x내부 값이 함수의 파라미터 변수 y로 복사되어 전달됨
	doSomething(x + 1);

	return 0;
}
