#include <iostream>
/* 
	���� ���ε��� ���� ���ε� 
	���� ���ε�: build time�� �������� �Լ��� �̸� �����Ǿ� ����
	���� ���ε�: function pointer�� 1�� ���ľ� �� 	
*/
using namespace std;

int add(int x, int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x + y;
}

int multiply(int x, int y)
{
	return x * y;
}

int main()
{
	int x, y;
	cin >> x >> y;

	int op;
	cout << "0 : add, 1 : subtract, 2 : multiply" << endl;
	cin >> op;

	/* Static Binding (early binding) */
	// �������̳� �Լ����� build time�� ���ǵǾ� ���� ��
	int result;
	switch (op)
	{
	case 0: result = add(x, y); break;
	case 1: result = subtract(x, y); break;
	case 2: result = multiply(x, y); break;
	}
	cout << result << endl;

	/* Dynamic Binding (late binding) */
	// function pointer�� ���� �־��־�� �ϰ� 
	// function pointer�� �ִ� memory address�� ���󰡼� function�� �����ؾ� �ϹǷ�
	// static binding���� �ӵ��� ������.
	int(*func_ptr)(int, int) = nullptr;
	switch (op)
	{
	case 0: func_ptr = add; break;
	case 1: func_ptr = subtract; break;
	case 2: func_ptr = multiply; break;
	}
	cout << func_ptr(x, y) << endl; // function pointer�� �ִ� memory address�� ���󰡼� �ش��ϴ� function ����

	return 0;
}
