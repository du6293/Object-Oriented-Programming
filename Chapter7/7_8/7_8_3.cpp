#include <iostream>
#include <string>
/* Default Parameters (�Ű������� �⺻��) */
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
	print(); // print(char ch = ' ') �����
	
	return 0;
}
