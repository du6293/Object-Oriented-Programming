#include <iostream>
using namespace std;


int main()
{
	// �� �������� ���ڿ��� �������� ���ϴ� '\0' �����ִ�.
	char myString[] = "string";

	for (int i = 0; i < 7; ++i)
	{
		cout << myString[i] << endl;
		//ASCII �ڵ� ���
		cout << (int)myString[i] << endl;
		
	}
	
	cout << sizeof(myString) / sizeof(myString[0]) << endl;
	
	return 0;
}
