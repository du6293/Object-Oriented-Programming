#include <iostream>
/* �Լ� ������ (Function Pointers) */
using namespace std;

int func(int)
{
	return 5;
}

int goo(int) 
{
	return 10;
}

int main()
{
	// �� �Լ��� ��� memory address�� �ִ� �� Ȯ���ϰ�
	// �ش� memory address�� �ִ� �Լ��� ����
	//func();

	// �Լ� ������ ���� �� �ʱ�ȭ
	int (*fcnptr)(int) = func;

	cout << fcnptr(1) << endl;

	// �Լ� �����͸� �ٸ� �Լ��� �����ͷ� �ٲٱ� �����ϴ� 
	fcnptr = goo; 

	cout << fcnptr(1) << endl;

	return 0;
}
