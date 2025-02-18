#include <iostream>
#include <cmath>
/* ������ ���� �μ� ���� (Call by Reference) */

using namespace std;

// 2�� 3�� �������� ��� ���ο� type�� �����ؼ� ����ϴ� ���� ����
typedef int* pint;

void foo(int *&ptr) // (int*) &ptr = pint &ptr�� ����
{
	cout << ptr << " " << &ptr << endl;
}

int main()
{
	int x = 5;
	int* ptr = &x;	// pint ptr�� ����

	cout << ptr << " " << &ptr << endl;
	foo(ptr);

	return 0;
}
