#include <iostream>
#include <cmath>
/* 참조에 의한 인수 전달 (Call by Reference) */

using namespace std;

// const를 붙여주면 main에서 함수의 입력 파라미터를 리터럴로 주어도 된다. 
void foo(const int& x)
{
	cout << x << endl;
}

int main()
{
	foo(6); // 바로 리터럴로 reference 입력을 주게 되면 오류 발생	
			// 파라미터에 const를 붙여주어야 한다.

	return 0;
}
