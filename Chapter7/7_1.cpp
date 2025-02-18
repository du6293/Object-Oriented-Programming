#include <iostream>

/* Parameter(매개변수)와 Argument(인자)의 구분 */

using namespace std;

int foo(int x, int y);

int foo(int x, int y)
{
	return x + y; // 함수가 종료됨과 동시에 OS로 메모리 반납
}

int main()
{
	int x = 1, y = 2;

	foo(6, 7); // 6,7: arguments(actual parameters, 실인자)
	foo(x, y + 1); // 값에 의한 전달. main의 x와 y가 함수 foo로 copy된다.
					// 따라서 main의 x와 y 그리고 foo 의 x와 y의 memory address는 다르다.
	return 0;
}
