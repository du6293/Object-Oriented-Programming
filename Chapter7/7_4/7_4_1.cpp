#include <iostream>

/* �ּҿ� ���� �μ� ����
(Passing Arguments by Address, Call By Address) 
�Լ��� �Ű������� ������ ������ ���� = ������ �ּҸ� ���� 
ȣ�� �� ������ �ּҸ� �����ؾ� �� 
*/

using namespace std;

void foo(int* ptr)
{
	// main�� ptr ������ �ּҿ� foo �Լ��� ptr ������ �ּҰ� �ٸ���
	cout << *ptr << " " << ptr << " " << &ptr << endl;
}

int main()
{
	int value = 5;

	cout << value << " " << &value << endl;

	int* ptr = &value;
	cout << &ptr << endl;	
	foo(ptr);
	foo(&value);	// �ּҸ� ���� 
	// foo(5); ���ͷ��� �ּҰ� ���� ������ �Լ� �Ķ���Ϳ� const�� ���̴��� �ٷ� �־��� �� x

	return 0;
}
