#include <iostream>
/* 다양한 return value들 (값, 참조, 주소, 구조체, 튜플)*/
using namespace std;
/* Case3. return type이 address일 때 */
int* getValue(int x) 
{
	int value = x * 2;

	return &value;
}

int main()
{
	int value = *getValue(3); // getValue함수 내 value 값은 함수가 종료되면 사라지는 지역변수이므로
							 // main에서 함수를 호출하고 난 다음 값을 그 리턴 값을 출력하도록 하는 것은 위험하다.

	cout << value << endl;
	return 0;
}
