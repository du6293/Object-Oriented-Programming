#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	char source[] = "Copy this!";
	char dest[50];
	// strcpy_s�� ����� �� dest�� ũ��� source���� Ŀ�� �Ѵ�.
	strcpy_s(dest, 50,source);

	cout << source << endl;
	cout << dest << endl;

	//strcat(): �� ���ڿ� �ڿ� �ٸ� ���ڿ��� �̾� ����
	strcat(dest, source);
	cout << source << endl;
	cout << dest << endl;

	//strcmp(): �� ���ڿ��� �������� ����, ������ 0 �ٸ��� 1
	cout << strcmp(source, dest) << endl;

	return 0;
}
