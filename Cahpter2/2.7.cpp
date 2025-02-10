#include <iostream>

/*
문자 하나를 표현할 땐 ' '
문자열을 표현할 땐 " " 
*/


int main(){
	
	using namespace std;

	char c1(65);
	char c2('A');
	
	
	// std::string
	
	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;
	/* C Style Casting*/
	cout << (char)65 << endl; 
	cout << (int)'A' << endl;
	cout << "" << endl;
	/* Cpp Style Casting*/
	cout << char(65) << endl;
	cout << int('A') << endl;

	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;
	
	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;
	cout << ch << endl;
	cout << "" << endl;
	
	/* 여러 문자를 입력하면 한 문자씩 buffer에 저장된다. */
	char c3(65);
	cin >> c3;
	cout << c3 << " " << static_cast<int>(c3) << endl;
	cin >> c3;
	cout << c3 << " " << static_cast<int>(c3) << endl;
	return 0;
}
