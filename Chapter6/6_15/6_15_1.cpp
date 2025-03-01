#include <iostream>

/* reference(참조)와 const*/
using namespace std;

void doSomething(const int x)
{
	cout << x << endl;
}

int main()
{
	const int x = 5;	// x의 값이 고정됨
	//const int &ref_x = x; // ref_x의 값이 고정됨

	// const가 붙은 reference 변수는 리터럴로 초기화 가능하다.
	const int &ref_x = 3 + 4;
	const int &ref_2 = ref_x; // ref_2의 값이 고정됨

	cout << ref_x << endl; // 7
	cout << &ref_x << endl; // memory address 

	return 0;
}
