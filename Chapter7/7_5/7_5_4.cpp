#include <iostream>
/* �پ��� return value�� (��, ����, �ּ�, ����ü, Ʃ��)*/
using namespace std;
/* Case3. return type�� address�� �� */

// design pattern���� ���� ���̴� ������ �ڵ� 
int* allocateMemory(int size) 
{
	return new int[size]; // memory address�� ��ȯ
}

int main()
{
	int* array = allocateMemory(1024);
	
	delete[] array;
	return 0;
}
