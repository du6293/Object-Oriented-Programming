#include <iostream>

/* 참조 변수(reference variable) */

using namespace std;


// main함수에 있는 n과는 다른 n이다. 두 변수의 주소값이 다르다.
// main 함수의 n이 doSomething함수의 n으로 copy되는 것
//void doSomething(int n)

// reference 변수 자체로 넘겨주었기 때문에
// main함수에 있는 n과 같은 n이다.
// 따라서 main함수의 n과 doSomething의 n은 같은 주소값을 갖는다.
//void doSomething(int &n)
void doSomething(const int &n) // main에 있는 n, doSomething n은 같은 주소값을 갖는 변수이고 이 n값을 바꿀 수 없다. 
{
	//n = 10;
	cout << &n << endl;
	cout << "In doSomething  " << n << endl;
}

int main()
{
	int n = 5;
	cout << &n << endl;
	doSomething(n);

	cout << "In main " << n << endl;

	return 0;
}
