#include <iostream>

/* Recursive Function Call (����� �Լ� ȣ��) 
	recursion �ڵ带 ���� �� stack overflow�� ���� ���� 
	���� ������ �ݵ�� �ʿ��ϴ�.

	�ڵ�� memory �� ��򰡿� ����Ǿ� �ְ�,
	�Լ��� ȣ���� �� �ش� memory address�� ���� ����
*/

using namespace std;

int sumTo(int sumto)
{
	if (sumto <= 0)
		return 0;
	else if (sumto <= 1)
		return 1;
	else
		return sumTo(sumto - 1) + sumto;
}

int main()
{
	cout << sumTo(10) << endl;
	
	return 0;
}
