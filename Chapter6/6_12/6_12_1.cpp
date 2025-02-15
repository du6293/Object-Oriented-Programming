#include <iostream>

/* Dynamically Allocating Arrays (동적 할당 배열) 
	정적 할당 배열은 배열 크기가 compile time에 결정된다. 
	동적 할당 배열은 run time에 배열의 크기를 결정하고  
	그때그때 메모리를 OS로부터 받아오기 때문에 유동적인 사용이 가능하다. 
*/

using namespace std;

int main()
{
	// 정적 할당 배열
	//const int length = 5;
	//int array[length];

	// 동적 할당 배열
	int length;
	cin >> length;
	// 배열의 모든 element들을 0으로 초기화
	//int* array = new int[length]();
	//int* array = new int[length] {};
	int* array = new int[length] {11,22,33,44,55,66}; // 만약 6보다 더 작은 크기로 할당해주면 memory 충돌 일어나 debug 시 오류 발생함

	for (int i = 0; i < length; i++)
	{
		cout << (uintptr_t)&array[i] << endl;
		cout << array[i] << endl;
	}

	delete [] array;

	return 0;
}
