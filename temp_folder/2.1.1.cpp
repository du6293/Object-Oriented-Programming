#include <iostream>
#include <bitset>



int main()
{
	using namespace std;
	
	bool bValue = false;
		
	cout << (bValue ? 1 : 0) << endl;
	
	char chValue = 'A';
	char chValeu1 = 65;
	float fValue = 3.141592f; // float은 뒤에 f 붙임 
	double dValue = 3.141592;
	
	auto aValue = 3.141592;  // double로 자동으로 결정됨
	auto eValue = 3.141592f; // float으로 자동으로 결정됨 
	
	cout << (int)chValue << endl;
	cout << chValue << endl;
	
	cout << fValue << endl;
	cout << dValue << endl;
	cout << aValue << endl;
	cout << eValue << endl;
	
	cout << sizeof(aValue) << endl; // double
	cout << sizeof(eValue) << endl; // float
	
	
	/* Data Type을 초기화 할 때 */
	/* Direct Initialization */
	//int a = 123; 
	int a(5.123);	//자동으로 5로 변환  
	
	/* Uniform Initialization */
	int b{5.123};
	
	cout << a << endl;
	cout << b << endl; 
	
	return 0;
} 
