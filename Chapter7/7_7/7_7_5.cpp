#include <iostream>
/* Function Overloading(�Լ� �����ε�)
	������ �̸��� �Լ��� ���� �� ����ϴ� �� 

	�Լ��� �̸��� ������ �Է����� �ִ� parameter�� �ٸ��� �ٸ� �Լ��̴�.
	�Ű����� Ÿ���� ���� �� �´�, �־��� ���ڿ� �Ű������� ������ ���� �Լ��� ������.
	return type�����δ� ������ �� ����. 
*/
using namespace std;

void print(unsigned int value) {}
void print(float value) {}

int main()
{
	//print('a'); // ambiguous ���� �߻�
	print(0u); // u�� �ٿ� ambiguous ���� �ذ�
	print(3.14159f); // f �� �ٿ� ambiguous ���� �ذ�

	return 0;
}
