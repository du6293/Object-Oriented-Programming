#include <iostream>

/* Default Parameters (매개변수의 기본값) */
using namespace std;

void print(int x = 1024) // 1024은 default parameter
{
	cout << x << endl;
}

int main()
{
	print(10);
	print(); // default parameter가 실행됨
	return 0;
}
