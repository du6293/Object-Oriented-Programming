#include <iostream>

/* 참조에 의한 인수 전달 (Call by Reference) 
함수의 매개변수로 참조 변수를 전달
호출 시 & 없이 변수 그대로 전달
함수 내부에서 원본 데이터 직접 수정 가능 
*/

using namespace std;

void addOne(int& y)
{
	y = y + 1;
	cout << y << " " << &y << endl;
}


int main()
{
	int x = 5;
	cout << x << " " << &x << endl;

	addOne(x); // main의 x와 함수 addOne의 x의 memory address가 같다. 
	cout << x << " " << &x << endl;

	return 0;
}
