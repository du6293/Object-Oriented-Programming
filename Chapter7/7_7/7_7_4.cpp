#include <iostream>
/* Function Overloading(�Լ� �����ε�)
	������ �̸��� �Լ��� ���� �� ����ϴ� �� 

	�Լ��� �̸��� ������ �Է����� �ִ� parameter�� �ٸ��� �ٸ� �Լ��̴�.
	�Ű����� Ÿ���� ���� �� �´�, �־��� ���ڿ� �Ű������� ������ ���� �Լ��� ������.
	return type�����δ� ������ �� ����. 
*/
using namespace std;

void print(char* value)
{
}

void print(int value)
{
}

int main()
{
	print(0); // �����Ϸ��� �˾Ƽ� �˸��� �Լ� �����ؼ� ����
	//print("a"); // �˸��� �Լ��� �� ã���� ���� �߻�
	return 0;
}
