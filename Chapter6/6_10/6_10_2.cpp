#include <iostream>

using namespace std;

int main()
{
	int int_arr[5] = { 1,2,3,4,5 };
	char char_arr[] = "Hello, World!";
	const char* name = "Jack Jack";

	cout << int_arr << endl; // 0��° element address ���

	// ����: ���ڿ� �迭�� ���, �迭�� �̸��� cout���� ����� �� null�� ���� ������ ���ڿ� ��ü�� ����Ѵ�
	cout << char_arr << endl;	// Hello, World! ���
	cout << name << endl; // Jack Jack ���
	
	char c = 'Q';
	cout << &c << endl; // null�� ���� ������ ���ڿ� ��ü�� ����Ѵ�. 
	cout << *&c << endl; // cout << c << endl�� ����.
	
	return 0;
}
