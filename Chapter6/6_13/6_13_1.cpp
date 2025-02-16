#include <iostream>

/* 포인터와 const */

/*
	case1) const int value = 5; -> 변수값을 바꿀 수 없음
	case2) const int *ptr = &value; -> ptr이 가리키는 주소값에 있는 변수를 바꿀 수는 없으나
								ptr이 다른 주소값에 있는 변수를 가리킬 수는 있음
	case3) int* const ptr = &value -> ptr이 가리키는 주소값에 있는 변수를 바꿀 수는 있으나
								ptr이 다른 주소값에 있는 변수를 가리킬 수는 없음
	case4) const int* const ptr = &value -> ptr이 가리키는 주소값에 있는 변수를 바꿀 수 없고
									ptr이 다른 주소값에 있는 변수를 가리킬 수도 없음 
*/

using namespace std;

int main()
{
	//const int value = 5; // 변수의 값을 바꾸지 않겠다는 뜻
	//const int* ptr = &value; // ptr이 가리키고 있는 주소에 들어있는 값을 바꾸지 않겠다는 뜻
							 // 다른 주소값에 있는 변수로 바꿀수는 있음
	
	/* Case 1. */					
	// value 변수에 const가 붙었기 때문에 
	// de-referencing으로 값을 바꿀 수 없음
	// *ptr = 6;

	/* Case 2. */
	int value1 = 5;
	const int* ptr = &value1;
	cout << "Hello " << endl;
	cout << *ptr << endl;
	
	int value2 = 6;
	ptr = &value2;
	cout << *ptr << endl; // *ptr값이 다른 주소에 있는 값인 6으로 변경됨
	//*ptr = 8; // 동일한 주소값에 있는 값은 못바꿈

	return 0;
}
