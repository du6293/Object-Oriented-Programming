#include <iostream>
/* 
	동적 바인딩과 정적 바인딩 
	정적 바인딩: build time에 변수값과 함수가 미리 결정되어 있음
	동적 바인딩: function pointer를 1번 거쳐야 함 	
*/
using namespace std;

int add(int x, int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x + y;
}

int multiply(int x, int y)
{
	return x * y;
}

int main()
{
	int x, y;
	cin >> x >> y;

	int op;
	cout << "0 : add, 1 : subtract, 2 : multiply" << endl;
	cin >> op;

	/* Static Binding (early binding) */
	// 변수값이나 함수명이 build time에 정의되어 있을 때
	int result;
	switch (op)
	{
	case 0: result = add(x, y); break;
	case 1: result = subtract(x, y); break;
	case 2: result = multiply(x, y); break;
	}
	cout << result << endl;

	/* Dynamic Binding (late binding) */
	// function pointer에 값을 넣어주어야 하고 
	// function pointer에 있는 memory address를 따라가서 function을 실행해야 하므로
	// static binding보다 속도가 느리다.
	int(*func_ptr)(int, int) = nullptr;
	switch (op)
	{
	case 0: func_ptr = add; break;
	case 1: func_ptr = subtract; break;
	case 2: func_ptr = multiply; break;
	}
	cout << func_ptr(x, y) << endl; // function pointer에 있는 memory address를 따라가서 해당하는 function 실행

	return 0;
}
