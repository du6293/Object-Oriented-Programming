#include <iostream>
#include <limits> 

 // const: type �� ���� �ٲ� �� ���� ��
 
 	/* 8����(Octal) */
	// 0 1 2 3 4 5 6 7 10 11 12 13...
	
	/* 16����(Hexadecimal) */
	// 0 1 2 3 4 5 6 7 8 9 A B C D E F 10
 

int main(){
	
	using namespace std;

	const float pi = 3.14f;
	int i = 12324; // uinsined
	int n = 5u;
	long n2 = 5L;
	double d = 6.0e-10;
	
	int x = 012; // 8����
	cout << x << endl;
	
	int y = 0xF; // 16���� 
	cout << y << endl; 
		
	int z = 0b1010; // 16���� 
	cout << z << endl; 
	
		
	int k = 0b1011'1111'1010; // 16���� 
	cout << k << endl; 
	
	/* �����ѹ� ����� ���� �ʴ�. */
	int num_items = 123;
	int price = num_items * 10; // ���⼭ 10�� ���� �ѹ�
	
	const int price_per_item = 10;
	price = num_items * price_per_item; 

	return 0;
}
