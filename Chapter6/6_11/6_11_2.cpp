#include <iostream>

/* Dynamic Memory Allocation(메모리 동적 할당)
	- new와 delete

	[메모리 할당 방식]
	1. static memory allocation (정적 메모리 할당)
		- 한 번 만들면 프로그램이 종료될 때까지 메모리를 계속 갖고 있음
		- stack에 할당됨 (크기가 매우 작음)

	2. 자동 메모리 할당
		- 변수를 선언하거나 정적배열을 선언했을 때 block 바깥을 나가면 전부 사라지고 다시 OS로 메모리가 할당됨
	
	3. dynamic memory allocation (동적 메모리 할당)
		- heap에 할당됨 (크기가 stack보다 큼)
*/


/* Case1*/
// memory에 data가 전부 들어가지 않을 수도 있음
// 이 때 일부 data만을 가지고 작업을 한 다음
// 작업이 끝나면 메모리를 OS에게 돌려줬다가 
// 다시 메모리를 받아서 data를 가져와야 할 수도 있다.

/* Case2*/
// 여러 프로그램들이 메모리를 다 많이 쓰고 싶은 경우
// 동시에 메모리를 많이 요구하는 프로그램을 여러 개를 돌리기가 어려우므로
// 급한 프로그램에게 우선 많이 줬다가 프로그램이 끝나면 메모리를 받아와서
// 다른 프로그램에게 메모리를 할당해주면 효율적으로 프로그램을 돌릴 수 있음

using namespace std;

int main()
{
	// 동적 메모리 할당 > heap
	// (std::nothrow): 동적 메모리 할당할 때 오류가 생겨도 지나치게 도와줌
	// new가 실패를 하더라도 nothrow에 의헤 ptr에 nullptr이 대입된다.
	int* ptr = new (std::nothrow) int{7}; // 4byte만큼 os에 메모리 받아옴
	if (ptr)
	{
		cout << ptr << endl; // memory address 출력
		cout << *ptr << endl;// 변수 값 출력
	}
	else
	{
		cout << "Could not allocate memory" << endl;
	}

	// 프로그램이 끝나기 전에 동적 메모리 할당 해제
	delete ptr;
	// 메모리 할당이 해제되었으므로 아무것도 없다고 표시를 남김
	ptr = nullptr; 

	return 0;
}
