#include <iostream>
/* 포인터와 정적 배열*/
using namespace std;


/*
	array가 structure나 class 안에 있을 경우에는
	포인터로 강제변환이 되지 않는다. 
	array 자체가 전달된다. 
*/

struct MyStruct
{
	int array[5] = { 9,7,5,3,1 };
};

// doSomething 내에서 새로운 ms 변수가 생성되고 기존 structure 내 array 복사본 생성. 
void doSomething(MyStruct ms)	// 구조체를 값으로 전달 
{	
	cout << sizeof(ms.array) << endl; // 복사된 구조체 내 배열의 크기 반환 
}

int main()
{
	MyStruct ms;

	cout << ms.array[0] << endl;	// 9
	cout << sizeof(ms.array) << endl;	// 20
	doSomething(ms);	// 20

	return 0;
}
