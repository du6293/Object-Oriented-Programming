#include <iostream>

using namespace std;

int main()
{
	int int_arr[5] = { 1,2,3,4,5 };
	char char_arr[] = "Hello, World!";
	const char* name = "Jack Jack";

	cout << int_arr << endl; // 0번째 element address 출력

	// 예외: 문자열 배열의 경우, 배열의 이름을 cout으로 출력할 때 null이 나올 때까지 문자열 전체를 출력한다
	cout << char_arr << endl;	// Hello, World! 출력
	cout << name << endl; // Jack Jack 출력
	
	char c = 'Q';
	cout << &c << endl; // null이 나올 때까지 문자열 전체를 출력한다. 
	cout << *&c << endl; // cout << c << endl과 같다.
	
	return 0;
}
