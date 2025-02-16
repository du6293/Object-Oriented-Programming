#include <iostream>

/* void ������ = generic pointer
	�ڷ����� ������� ���������� �����͸� ������ �� �ִ�.
	������ ������ �� ����ϴ� ��찡 �ִ�.
*/
using namespace std;

enum Type
{
	INT,
	FLOAT,
	CHAR,
};

int main()
{
	int i = 5;
	float f = 3.0;
	char c = 'a';

	void* ptr = nullptr;

	ptr = &i; 
	ptr = &f;
	//ptr = &c;

	Type type = FLOAT;

	cout << &f << " " << ptr << endl;
	//cout << *ptr << endl; // ptr�� void ���̹Ƿ� de-referencing �Ұ�
	if (type == FLOAT)
	{
		cout << *static_cast<float*>(ptr) << endl; // type casting�� ���ָ� de-referencing ����
	}
	else if (type == INT)
	{
		cout << *static_cast<int*>(ptr) << endl;
	}

	// ������ ������ �ڷ����� void�� �ƴϸ� ������ ������ ����� �� ����
	int* ptr_i = &i;
	cout << ptr_i << endl;
	cout << ptr_i + 1 << endl;

	// ������ ������ �ڷ����� void�̸� ������ ������ ����� �� ����.
	cout << ptr << endl;
	//cout << ptr + 1 << endl;


	return 0;
}
