#include <iostream>

using namespace std;

/*
	������ �����Ѵ� = OS�� ���� memory space�� �����´�
	
	���� ������ stack memory�� ���
	���� �Ҵ� �޸𸮴� heap memory�� ���
	
	ū �޸𸮿� ����Ǿ� �ִ� data �� �Ϻκ��� CPU�� ����ϱ� ����
	memory�κ��� ������ ������ memory ��ü�� ��� �����鼭 ã�� �� �ƴ϶�
	�ʿ��� data�� ����Ǿ� �ִ� address�� ����� ���� �����Ͽ� �����´�.
*/

/*
	������: memory address�� ��� ����
*/


int main()
{
	int x = 5;
	cout << x << endl;
	// 16������ memory address ���
	cout << &x << endl; // &: address of operator
	cout << (int)&x << endl; // memory address decimal�� ���

	// de-reference operator(*)
	// �����Ͱ� "���� �ּҿ� ���� �� �����Ͱ� �ִ�"���
	// ���������� ����Ű�⸸ �ϴ� �Ϳ� ����,
	// "�׷� �ű� ��¥ ���� �ִ� �� �鿩�� ����"���
	// ���������� �����ϰڴٴ� �ǹ�

	// �ش� �ּҷ� ã�ư� �ִ� ������ ������ Ȯ��
	cout << *(&x) << endl;


	return 0;
}
