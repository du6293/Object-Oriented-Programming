#include <iostream>

using namespace std;

/*
	변수를 선언한다 = OS로 부터 memory space를 빌려온다
	
	지역 변수는 stack memory를 사용
	동적 할당 메모리는 heap memory를 사용
	
	큰 메모리에 저장되어 있는 data 중 일부분을 CPU가 사용하기 위해
	memory로부터 가져올 때에는 memory 전체를 모두 뒤지면서 찾는 게 아니라
	필요한 data가 저장되어 있는 address를 사용해 직접 접근하여 가져온다.
*/

/*
	포인터: memory address를 담는 변수
*/


int main()
{
	int x = 5;
	cout << x << endl;
	// 16진수로 memory address 출력
	cout << &x << endl; // &: address of operator
	cout << (int)&x << endl; // memory address decimal로 출력

	// de-reference operator(*)
	// 포인터가 "저쪽 주소에 가면 이 데이터가 있다"라고
	// 간접적으로 가리키기만 하는 것에 대해,
	// "그럼 거기 진짜 뭐가 있는 지 들여다 볼게"라고
	// 직접적으로 접근하겠다는 의미

	// 해당 주소로 찾아가 있는 변수의 내용을 확인
	cout << *(&x) << endl;


	return 0;
}
