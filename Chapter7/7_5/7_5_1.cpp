#include <iostream>
/* 다양한 return value들 (값, 참조, 주소, 구조체, 튜플)*/
using namespace std;
/* Case1. return type이 value일 때 */
int getValue(int x) // main의 x값이 복사가 일어나 새로운 변수 x를 생성
{
	int value = x * 2;

	return value;
}

int main()
{
	int value = getValue(3);

	return 0;
}
