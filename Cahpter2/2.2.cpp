/*
자료형의 크기는 
사용하고 있는 OS와 그에 맞는 compiler가 결정한다. 
*/

#include <iostream>
#include <cmath>
#include <limits> // compiler에게 특정 자료형이 표현할 수 있는 가장 큰 숫자를 알려주는 라이브러리 

int main(void){
	
	using namespace std;
	
	short 		s 	= 1;
	int 		i 	= 1;
	long 		l 	= 1;
	long long 	ll 	= 1;
	
	/* Print Bytes */
	cout << sizeof(short) 		<< endl;
	cout << sizeof(int) 		<< endl;
	cout << sizeof(long) 		<< endl;
	cout << sizeof(long long) 	<< endl;
	
	/* Print All case */
	// 표현할 수 있는 가장 큰 숫자
//	cout << "" << endl; 
//	cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;  
//	cout << std::numeric_limits<short>::max() << endl;
//	cout << std::numeric_limits<short>::min() << endl;
//	cout << std::numeric_limits<short>::lowest() << endl;
//	cout << "" << endl; 
	
	/* Overflow */
	short 		m = 32767;
	m = m + 1; 		// 32768이 되어야 하는데 -32767 출력 >> overflow: 표현 범위 넘어감  
	cout << m << endl;
	cout << " " << endl; 
	
	/* Underflow */
	short n = std::numeric_limits<short>::min(); // -32767
	cout << "min() " << n << endl;
	n = n - 1;		// -32768이 되어야 하는데 32767 출력 >> underflow: 표현 범위 넘어감 
	cout << " " << n << endl;
	
	
	
	return 0;
} 
