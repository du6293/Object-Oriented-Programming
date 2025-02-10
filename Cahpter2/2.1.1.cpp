#include <iostream>
#include <bitset>



int main()
{
	using namespace std;
	
	bool bValue = false;
		
	cout << (bValue ? 1 : 0) << endl;
	
	char chValue = 'A';
	char chValeu1 = 65;
	float fValue = 3.141592f; // float�� �ڿ� f ���� 
	double dValue = 3.141592;
	
	auto aValue = 3.141592;  // double�� �ڵ����� ������
	auto eValue = 3.141592f; // float���� �ڵ����� ������ 
	
	cout << (int)chValue << endl;
	cout << chValue << endl;
	
	cout << fValue << endl;
	cout << dValue << endl;
	cout << aValue << endl;
	cout << eValue << endl;
	
	cout << sizeof(aValue) << endl; // double
	cout << sizeof(eValue) << endl; // float
	
	
	/* Data Type�� �ʱ�ȭ �� �� */
	/* Direct Initialization */
	//int a = 123; 
	int a(5.123);	//�ڵ����� 5�� ��ȯ  
	
	/* Uniform Initialization */
	int b{5.123};
	
	cout << a << endl;
	cout << b << endl; 
	
	return 0;
} 
