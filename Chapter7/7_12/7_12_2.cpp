#include <iostream>

/* Recursive Function Call (재귀적 함수 호출) 
	recursion 코드를 만들 땐 stack overflow를 막기 위해 
	종료 조건이 반드시 필요하다.

	코드는 memory 상 어딘가에 저장되어 있고,
	함수를 호출할 땐 해당 memory address를 보고 간다
*/

using namespace std;

int sumTo(int sumto)
{
	if (sumto <= 0)
		return 0;
	else if (sumto <= 1)
		return 1;
	else
		return sumTo(sumto - 1) + sumto;
}

int main()
{
	cout << sumTo(10) << endl;
	
	return 0;
}
