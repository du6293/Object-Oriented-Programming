#include <iostream>

/* Recursive Function Call (����� �Լ� ȣ��) 
	recursion �ڵ带 ���� �� stack overflow�� ���� ���� 
	���� ������ �ݵ�� �ʿ��ϴ�.

	�ڵ�� memory �� ��򰡿� ����Ǿ� �ְ�,
	�Լ��� ȣ���� �� �ش� memory address�� ���� ����
*/

using namespace std;

void CountDown(int count)
{
	cout << count << endl;
	if (count > 0)
	{
		CountDown(count - 1);
	}
}

int main()
{
	CountDown(5);

	return 0;
}
