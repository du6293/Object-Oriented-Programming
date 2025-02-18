#include <iostream>
#include <cmath>
/* ������ ���� �μ� ���� (Call by Reference) */

using namespace std;

void getSinCos(const double &degree, double& sin_out, double& cos_out)
{
	static const double pi = 3.141592 / 180.0; // ������ 1���� �����ϰ� �� 

	const double radians = degree * pi / 180.0;
	
	sin_out = sin(radians);
	cos_out = cos(radians);
}


int main()
{
	double sin(0.0);
	double cos(0.0);

	getSinCos(30.0, sin, cos);

	cout << sin << " " << cos << endl;

	return 0;
}
