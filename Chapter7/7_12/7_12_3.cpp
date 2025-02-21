#include <iostream>

/* Recursive Function Call (재귀적 함수 호출) */

// 0 1 2 3 5 8 13
using namespace std;

int fibonacci(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	cout << fibonacci(6) << endl;
	
	return 0;
}
