#include <iostream>

/* reference(참조)와 const*/
using namespace std;

// reference로 넘겨줬으니까 변수 복사가 안 일어난다.
void doSomething(const int &x)
{
	cout << x << endl;
}

int main()
{
	int a = 1;

	doSomething(a);

	// doSomething 함수의 파라미터에 const가 붙었기 때문에 
	// 상수를 바로 파라미터로 주어도 된다. 
	doSomething(1);	
	doSomething(a + 3);
	doSomething(3 * 4);

	return 0;
}
