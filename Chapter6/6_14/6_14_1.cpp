#include <iostream>

/* ���� ����(reference variable) */

using namespace std;

int main()
{
	int value = 5;
	int* ptr = nullptr;
	ptr = &value;

	// �������� ����
	int& ref = value; // value�� �����ϰ� �ִ� �޸𸮸� ref�� ����ϰ� ��
						// ref�� value�� �޸� �ּҴ� ����.

	cout << ref << endl;
	ref = 10; // *ptr = 10 �� ����. value ���� ���� 10���� �ٲ��. 
	cout << value << " " << ref << endl;

	// ���� value, ref, ptr ������, ptr ���� �ּ� Ȯ��
	cout << &value << " " << &ref << " " << ptr << " " << &ptr << endl;


	return 0;
}
