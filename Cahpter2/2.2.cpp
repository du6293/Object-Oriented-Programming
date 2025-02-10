/*
�ڷ����� ũ��� 
����ϰ� �ִ� OS�� �׿� �´� compiler�� �����Ѵ�. 
*/

#include <iostream>
#include <cmath>
#include <limits> // compiler���� Ư�� �ڷ����� ǥ���� �� �ִ� ���� ū ���ڸ� �˷��ִ� ���̺귯�� 

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
	// ǥ���� �� �ִ� ���� ū ����
//	cout << "" << endl; 
//	cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;  
//	cout << std::numeric_limits<short>::max() << endl;
//	cout << std::numeric_limits<short>::min() << endl;
//	cout << std::numeric_limits<short>::lowest() << endl;
//	cout << "" << endl; 
	
	/* Overflow */
	short 		m = 32767;
	m = m + 1; 		// 32768�� �Ǿ�� �ϴµ� -32767 ��� >> overflow: ǥ�� ���� �Ѿ  
	cout << m << endl;
	cout << " " << endl; 
	
	/* Underflow */
	short n = std::numeric_limits<short>::min(); // -32767
	cout << "min() " << n << endl;
	n = n - 1;		// -32768�� �Ǿ�� �ϴµ� 32767 ��� >> underflow: ǥ�� ���� �Ѿ 
	cout << " " << n << endl;
	
	
	
	return 0;
} 
