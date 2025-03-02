#include <iostream>
/* 다양한 return value들 (값, 참조, 주소, 구조체, 튜플)*/
using namespace std;
/* Case2. return type이 reference일 때 */

// design pattern에서 자주 쓰이는 형태의 코드 
int& getValue(int x)
{
	int value = x * 2;
	return value;
}

int main()
{
	int value = getValue(5); // getValue 함수의 변수 value는 지역변수로 함수가 종료되면 사라진다.

	cout << value << endl;	// getValue 함수의 변수 value의 메모리가 사라졌기 때문에 
				// 윗 줄에서 출력한 값과 다른 값이 나온다.
	return 0;
}
