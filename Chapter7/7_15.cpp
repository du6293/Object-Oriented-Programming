#include <iostream>
#include <string>
/* Command Line Arguments(명령줄 인수) */

using namespace std;

// OS가 main함수를 호출할 뗀 main함수의 parameter로 2가지(정수, 문자열 array)를 넣을 수 있다.
int main(int argc, char *argv[]) 
{
	for(int count = 0; count < argc; ++count)
	{
		// exe file 이름을 출력
		// array를 string으로 받음
		string argv_single = argv[count];

		if (count == 1)
		{
			int input_number = stoi(argv_single);
			cout << input_number + 1 << endl;
		}
		else
			cout << argv_single << endl;
	}

	return 0;
}
