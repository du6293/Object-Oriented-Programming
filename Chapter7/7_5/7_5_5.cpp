#include <iostream>
/* �پ��� return value�� (��, ����, �ּ�, ����ü, Ʃ��)*/
using namespace std;
/* Case2. return type�� reference�� �� */

// design pattern���� ���� ���̴� ������ �ڵ� 
int& getValue(int x)
{
	int value = x * 2;
	return value;
}

int main()
{
	int value = getValue(5); // getValue �Լ��� ���� value�� ���������� �Լ��� ����Ǹ� �������.

	cout << value << endl;
	cout << value << endl;	// getValue �Լ��� ���� value�� �޸𸮰� ������� ������ 
							//�� �ٿ��� ����� ���� �ٸ� ���� ���´�.
	return 0;
}
