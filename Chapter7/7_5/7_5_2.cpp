#include <iostream>
/* �پ��� return value�� (��, ����, �ּ�, ����ü, Ʃ��)*/
using namespace std;
/* Case3. return type�� address�� �� */
int* getValue(int x) 
{
	int value = x * 2;

	return &value;
}

int main()
{
	int value = *getValue(3); // getValue�Լ� �� value ���� �Լ��� ����Ǹ� ������� ���������̹Ƿ�
							 // main���� �Լ��� ȣ���ϰ� �� ���� ���� �� ���� ���� ����ϵ��� �ϴ� ���� �����ϴ�.

	cout << value << endl;
	return 0;
}
