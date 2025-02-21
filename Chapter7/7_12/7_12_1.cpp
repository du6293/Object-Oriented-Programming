#include <iostream>

/* Recursive Function Call (재귀적 함수 호출) 
	recursion 코드를 만들 땐 stack overflow를 막기 위해 
	종료 조건이 반드시 필요하다.

	코드는 memory 상 어딘가에 저장되어 있고,
	함수를 호출할 땐 해당 memory address를 보고 간다
*/

using namespace std;

void CountDown(int count)
{
	cout << count << endl;
	if (count > 0)
	{
		CountDown(count - 1);
	}
}

int main()
{
	CountDown(5);

	return 0;
}
