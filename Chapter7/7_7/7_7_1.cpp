#include <iostream>
/* Function Overloading(�Լ� �����ε�)
	������ �̸��� �Լ��� ���� �� ����ϴ� �� 

	�Լ��� �̸��� ������ �Է����� �ִ� parameter�� �ٸ��� �ٸ� �Լ��̴�.
	�Ű����� Ÿ���� ���� �� �´�, �־��� ���ڿ� �Ű������� ������ ���� �Լ��� ������.
	return type�����δ� ������ �� ����. 
*/
using namespace std;

int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}


int main()
{
	add(1, 2); // int add�� �� �� double add�� �� ���� compile time�� �����Ǿ�� �Ѵ�.
	add(3.0, 4.0);

	return 0;
}
