#include <iostream>

/* ������ ���� �μ� ���� (Call by Reference) 
�Լ��� �Ű������� ���� ������ ����
ȣ�� �� & ���� ���� �״�� ����
�Լ� ���ο��� ���� ������ ���� ���� ���� 
*/

using namespace std;

void addOne(int& y)
{
	y = y + 1;
	cout << y << " " << &y << endl;
}


int main()
{
	int x = 5;
	cout << x << " " << &x << endl;

	addOne(x); // main�� x�� �Լ� addOne�� x�� memory address�� ����. 
	cout << x << " " << &x << endl;

	return 0;
}
