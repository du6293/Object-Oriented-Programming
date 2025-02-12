#include <iostream>
#include "MyConstants.h"

/*
	-Global Variable: 가급적 사용하지 않는 게 좋다
	-Static Variable: 메모리가 정적으로 같은 주소에 할당되는 변수, 초기화는 1번만 일어남
				해당 변수가 OS로부터 받은 변수의 메모리 크기는 static하다.
				프로그램 시작될 때 메모리에 할당되고 프로그램이 종료될 때 해제
	블록 안에 변수의 사용범위가 제한되어 있는 경우 linkage가 없다.
	local variable은 특정 파일 내에서만 사용되기 때문에 다른 파일에서는 볼 수 없다. 
	따라서 local variable은 linkage가 없다.
	linking 단계에서 local variable은 다른 파일에 있는 variable과 linking해 줄 필요가 없다.
	-Internal Linkage: 변수를 선언했는데 파일 내에서는 어디서든 사용할 수 있는 경우
	개별 C++ 파일 내에서만 global 하게 동작하는 변수를 의미
	-External Linkage: 한 c++ 파일에서 선언한 변수를 다른 c++파일에서도 사용 가능한 경우
	외부 파일에 선언되어 있는 함수를 extern으로 선언하여 사용할 수 있다.
	global 변수를 다른 파일에서도 사용할 수 있다. 
*/


using namespace std;

/* Forward Declaration */
/* 어딘가 외부에 함수가 선언되어 있다. */
extern void doSomething();
extern int a;//  이미 test.cpp에 초기화 된다.

/*
	int g_x;		external linkage
	static int g_x; internal linkage
	const int g_x;	X

	extern int g_z; 
	extern const int g_z;

	int g_y = 1;
	static int g_y = 1;
	const int g_y = 1;

	extern int g_w = 1;
	extern const int g_w = 1;

*/

int main()
{

	doSomething();
	cout << a << endl;
	/* test.cpp의 변수와 4.2cpp 의 변수의 메모리 주소가 동일한 것을 확인할 수 있다. */
	cout << "In main.cpp file "  << Constants::pi << " " << &Constants::pi << endl;
	doSomething();
	return 0;

}