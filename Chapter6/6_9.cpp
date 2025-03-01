#include <iostream>

using namespace std;

/* 포인터 연산과 배열 인덱싱 */
int main()
{
	// 정적 배열도 포인터이다.
	char name[] = "jackjack"; // 맨 마지막 '\0' 포함됨
	char* ptr = name;

	const int n_name = sizeof(name) / sizeof(name[0]);

	for (int i = 0; i < n_name; ++i)
	{
		// null 까지 모두 출력됨
		//cout << *(name + i) ;
		cout << *(ptr + i); // 윗줄과 결과 동일
	}
	cout << endl;

	
	while (*(ptr) != '\0')
	{
		
		cout << *(ptr) << endl;
		ptr++;

	}

	return 0;
}
