#include <iostream>

/* �ּҿ� ���� �μ� ����
(Passing Arguments by Address, Call By Address) 
*/

using namespace std;

void foo(double degree, double *sin_out, double *cos_out)
{
	*sin_out = 1.0;
	*cos_out = 2.0;

}

int main()
{
	double degree = 30;
	double sin = 3.0;
	double cos = 4.0;

	foo(degree, &sin, &cos);

	cout << sin << " " << cos << endl; // �Լ��� ���� ���� �ٲ��

	return 0;
}
