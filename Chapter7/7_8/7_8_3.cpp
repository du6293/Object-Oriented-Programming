#include <iostream>
#include <string>
/* Default Parameters (매개변수의 기본값) */
using namespace std;

void print(string str)
{

}

void print(char ch = ' ')
{
	cout << "char" << endl;
}

int main()
{
	print(); // print(char ch = ' ') 실행됨
	
	return 0;
}
