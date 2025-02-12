#include <iostream>
/* iomanipulator: ������� �Ҽ��� ��°�ڸ����� ����� �� �ִ��� ���� ����  */
#include <iomanip>
#include <limits>
#include <cmath>


int main(void){
	
	using namespace std;
	/* 3.14e2 = 31.4 * 0.1 */
	float f(123456789.0f); // 10 significant digits 
	
	double d1(0.1);
	double d2(0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
	double zero = 0.0;
	double posinf = 5.0 / zero;  // infinite
	double neginf = -5.1 / zero; // negative infinite
	/* Not a Number */
	double nan = zero / zero; // nan(ind): indeterminate 
	
	/* ����� �Ҽ��� �ڸ��� ���� */
//	cout << d1 << endl;
//	cout << std::setprecision(17) ;
//	cout << f << endl;
//	cout << d1 << endl;
//	cout << d2 << endl;

	cout << posinf << " " << std::isnan(posinf) <<endl; 
	cout << neginf << " " << std::isnan(neginf) << endl;
	cout << nan << " " << std::isnan(nan) << endl;
	cout << 1.0 << " " << std::isnan(1.0) << endl;
	cout << "" << endl;
	
	cout << posinf << " " << std::isinf(posinf) <<endl; 
	
	
	
	return 0;
} 
