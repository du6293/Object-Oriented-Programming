#include <iostream>

/* 포인터와 const */
using namespace std;

int main()
{
	/* Case 3. */
	int value = 5;
	int* const ptr = &value; // 가리키는 주소값에 있는 값을 바꿀 수 있음
							 // 다른 주소값에 있는 변수를 가리킬 수 없음
	
	*ptr = 10;
	cout << *ptr << endl;

	//int value2 = 8;
	//ptr = &value2; // 다른 주소값에 있는 변수를 가리킨 수 없음

	/* Case 4. */
	int value3 = 5;
	const int* const ptr = &value3; // 이 땐 포인터 자체가 상수이므로 무조건 초기화 해주어야 한다. 

	//*ptr = 10;// 다른 주소값에 있는 변수를 가리킬 수 없음
	//ptr = &value;// 동일 주소값에 있는 변수를 다른 변수값으로 바꿀 수 없음

	return 0;
}
