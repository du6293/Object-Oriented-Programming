#include <iostream>
/* �پ��� return value�� (��, ����, �ּ�, ����ü, Ʃ��)*/
using namespace std;
/* Case1. return type�� vallue�� �� */
int getValue(int x) // main�� x���� ���簡 �Ͼ ���ο� ���� x�� ����
{
	int value = x * 2;

	return value;
}

int main()
{
	int value = getValue(3);

	return 0;
}
