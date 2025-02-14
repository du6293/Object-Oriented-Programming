#include <iostream>
using namespace std;


int main()
{
	char myString[255];

	// space bar 입력하면 입력 전 내용 까지만 myString에 담김
	//cin >> myString;
	// sapce bar로 인한 문제 해결
	cin.getline(myString, 255);
	// index 0 변경
	//myString[0] = 'A';
	 
	// index 4 이후로 출력이 아예 안됨
	//myString[4] = '\0';

	// 공백과 null은 다르다.
	// 공백 아스키 코드: 32
	int ix = 0;
	while (true)
	{
		if (myString[ix] == '\0')
		{
			break;
		}
		cout << myString[ix] << " " << (int)myString[ix] << endl;
		++ix;
	}
	
	cout << myString << endl;

	return 0;
}
