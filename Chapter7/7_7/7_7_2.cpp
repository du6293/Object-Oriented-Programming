#include <iostream>
/* Function Overloading(�Լ� �����ε�)
	������ �̸��� �Լ��� ���� �� ����ϴ� �� 

	�Լ��� �̸��� ������ �Է����� �ִ� parameter�� �ٸ��� �ٸ� �Լ��̴�.
	�Ű����� Ÿ���� ���� �� �´�, �־��� ���ڿ� �Ű������� ������ ���� �Լ��� ������.
	return type�����δ� ������ �� ����. 
*/
using namespace std;


void getRandomValue(int &x) 
{
	
}

void getRandomValue(double &x)
{

}

int main()
{

	// overload�� �� �Լ��� ��� void �̰� parameter������ ������ �� �����Ƿ�
	// �̸� �Է����� �� �Ķ���͸� �������־�� �Ѵ�.
	int x;
	getRandomValue(x);

	return 0;
}
