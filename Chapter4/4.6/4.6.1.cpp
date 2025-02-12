#include <iostream>
#include <string>

using namespace std;

/*
	1. Array로써의 문자열
	문자열 배열로 볼 땐 (c style)가장 마지막에는 null이 숨어있다.
	2. String으로써의 문자열
	문자열을 string으로 볼 땐 가장 마지막의 null을 고려하지 않는다.
*/

int main()
{
	string a("Hello, ");
	string b("World");
	// append: 문자열 뒤에 문자열을 더하는 것
	string hw = a + b;

	hw += " I'm good";
	cout << a + b << endl;
	cout << hw << endl;
	cout << endl;

	string c("My name is Kim Seondeok");
	// length(): 문자열의 길이 측정
	cout << c.length() << endl; // null은 카운트하지 않는다.

	return 0;
}
