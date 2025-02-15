#include <iostream>

/* Dynamically Allocating Arrays (동적 할당 배열) 
	정적 할당 배열은 배열 크기가 compile time에 결정된다. 
	동적 할당 배열은 run time에 배열의 크기를 결정하고  
	그때그때 메모리를 OS로부터 받아오기 때문에 유동적인 사용이 가능하다. 
	동적 할당 배열에서도 똑같이 포인터 연산을 사용해서 값들을 접근할 수 있다.
*/

using namespace std;

int main()
{
	int fixedArray[] = { 1,2,3,4,5 }; // 알아서 size를 결정함

	int* array = new int[5] {1, 2, 3, 4, 5}; // size를 반드시 입력해 줘야함
	
	// Case 1
	// 위 동적 할당 메모리에서 size 5보다 더 큰 메모리를 사용해야 하는 경우
	// 더 큰 메모리를 동적 할당한 다음 원래 갖고 있던 걸 복사해서 집어넣고
	// 그 뒤에 새로 추가가 될 것들을 덧붙여야 함

	// Case 2
	// 현재 5칸을 쓰고 있는데 뒤에 2칸을 더 연결해서 사용할 수 있는지 OS에게 물어봄
	// 안된다면 새로 할당해야 한다.

	delete[] array;

	return 0;
}
