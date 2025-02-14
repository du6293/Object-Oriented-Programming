#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	char source[] = "Copy this!";
	char dest[50];
	// strcpy_s를 사용할 때 dest의 크기는 source보다 커야 한다.
	strcpy_s(dest, 50,source);

	cout << source << endl;
	cout << dest << endl;

	//strcat(): 한 문자열 뒤에 다른 문자열을 이어 붙임
	strcat(dest, source);
	cout << source << endl;
	cout << dest << endl;

	//strcmp(): 두 문자열이 동일한지 비교함, 같으면 0 다르면 1
	cout << strcmp(source, dest) << endl;

	return 0;
}
