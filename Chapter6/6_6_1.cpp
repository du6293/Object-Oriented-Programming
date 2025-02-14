#include <iostream>
using namespace std;


int main()
{
	// 맨 마지막에 문자열의 마지막을 뜻하는 '\0' 숨어있다.
	char myString[] = "string";

	for (int i = 0; i < 7; ++i)
	{
		cout << myString[i] << endl;
		//ASCII 코드 출력
		cout << (int)myString[i] << endl;
		
	}
	
	cout << sizeof(myString) / sizeof(myString[0]) << endl;
	
	return 0;
}
