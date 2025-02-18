#include <iostream>
/* 인라인 함수(Inline Functions) 
함수가 아닌 것처럼 동작함 
코드 파일 내 모든 함수를 인라인으로 바꾼다고 해서 코드의 실행 속도가 빨라지는 것은 아님
요즘 compiler는 inline을 적용하는 것, 적용하지 않는 것 중 빠른 것을 선택적으로 알아서 적용해 실행한다.
*/
using namespace std;

inline int min(int x, int y)
{
	return x > y ? y : x;
}

int main()
{
	cout << min(5, 6) << endl;
	cout << min(3, 2) << endl;

	// inline함수를 사용하면 위 2 line이 다음과 같이 컴파일 된다. 
	cout << (5 > 6 ? 6 : 5) << endl;
	cout << (3 > 2 ? 2 : 3) << endl;
	return 0;
}
