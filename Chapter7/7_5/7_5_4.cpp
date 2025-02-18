#include <iostream>
/* 다양한 return value들 (값, 참조, 주소, 구조체, 튜플)*/
using namespace std;
/* Case3. return type이 address일 때 */

// design pattern에서 자주 쓰이는 형태의 코드 
int* allocateMemory(int size) 
{
	return new int[size]; // memory address를 반환
}

int main()
{
	int* array = allocateMemory(1024);
	
	delete[] array;
	return 0;
}
