#include <iostream>

/* Parameter(�Ű�����)�� Argument(����)�� ���� */

using namespace std;

int foo(int x, int y);

int foo(int x, int y)
{
	return x + y; // �Լ��� ����ʰ� ���ÿ� OS�� �޸� �ݳ�
}

int main()
{
	int x = 1, y = 2;

	foo(6, 7); // 6,7: arguments(actual parameters, ������)
	foo(x, y + 1); // ���� ���� ����. main�� x�� y�� �Լ� foo�� copy�ȴ�.
					// ���� main�� x�� y �׸��� foo �� x�� y�� memory address�� �ٸ���.
	return 0;
}
