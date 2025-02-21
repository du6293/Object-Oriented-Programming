#include <iostream>
/* Defensive Programming (방어적 프로그래밍) 
	오류가 있다면 컴파일러가 미리 오류를 잡을 수 있도록 구현하는 것이 좋다.
	프로그램에는 방어적 프로그램을 통한 안전장치가 있어야 한다. 
*/
using namespace std;

int main()
{
	// syntax error: 문법 규칙 오류로 컴파일이 불가능한 오류
	// semantic error: 문법은 맞으나 의도한 동작과 다르게 실행되는 오류
	int x;
	cin >> x;

	if (x >= 5)
	{
		cout << "x is greater than 5 " << endl;
	}

	// violated assumption: 코드가 특정 assumption을 기반으로 작성되었는데 그게 깨진 경우
	string hello = "Hello, my name is Jack Jack";

	cout << "Input from 0 to " << hello.size() - 1 << endl;
	while (true)
	{
		int ix;
		cin >> ix;

		if (ix >= 0 && ix <= hello.size() - 1)
		{
			cout << hello[ix] << endl;
			break;
		}
		else
			cout << "Please try again " << endl;
	}
	return 0;
}
