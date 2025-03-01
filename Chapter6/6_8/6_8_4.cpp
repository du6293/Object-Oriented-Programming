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

void doSomething(MyStruct *ms) // 구조체를 포인터로 전달 
{
	cout << sizeof((*ms).array) << endl; // 원본 구조체의 배열을 그대로 참조 
}

int main()
{
	MyStruct ms;

	cout << ms.array[0] << endl;	// 9
	cout << sizeof(ms.array) << endl;	// 20
	doSomething(&ms);	// 20

	return 0;
}
