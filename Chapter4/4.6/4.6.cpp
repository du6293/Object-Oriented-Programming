#include <iostream>
#include <string>
#include <limits>

using namespace std;

/*
	문자열 가장 마지막에는 가 숨어있다.
*/
int main()
{
	// array: 한 글자를 여러 개 나열하는 방식
	const char my_strs [] = "Hello, World";
	// string: 사용자 정의 자료형, 배열보다 편한 방식
	const string my_hello("Hello, World");

	string my_ID = "123"; // int를 string으로 암시적 형변환하는 방법은 없다. 
	cout << my_hello << endl;
	cout << endl;


	cout << "Your age?: ";
	int age;
	// 1. 입력 시 space bar를 한번 입력하면 입력이 끝난 것
	cin >> age;
	// 2. line 단위로 입력을 받음(space 눌러도 상관 x)
	// std::getline(std::cin, age);

	// 입력받은 32767개의 글자를 무시하라는 뜻
	// std::cin.ignore(32767, '\n');
	// streamsize = buffer size
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	
	cout << "Your name?: " ;
	string name;
	// 1. 입력 시 space bar를 한번 입력하면 버퍼에 입력이 끝난 것
	//cin >> name;
	// 2. line 단위로 입력을 받음(space 눌러도 상관 x)
	std::getline(std::cin, name);

	cout << name << " " << age << endl;

	return 0;
}