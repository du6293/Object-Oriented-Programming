#include <iostream>
#include <iomanip>
#include <limits>



int main(void){
	
	using namespace std;
	
	float f;
	double d;
	long double ld;
	
	
	cout << sizeof(f) << endl;		// 4
	cout << sizeof(d) << endl;		// 8
	cout << sizeof(ld) << endl;		// 12
	cout << "" << endl;
	
	/* 해당 type이 표현할 수 있는 가장 큰 양수 */
	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl;
	cout << "" << endl;
	/* 해당 type이 표현할 수 있는 가장 작은 양수 */
	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<long double>::min() << endl;
	cout << "" << endl;
	/* 해당 type이 표현할 수 있는 가장 작은 값 */
	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl;
	cout << "" << endl;
	
	
	return 0;
} 
