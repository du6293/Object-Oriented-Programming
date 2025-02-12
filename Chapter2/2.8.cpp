#include <iostream>
#include <limits> 

 // const: type 및 값을 바꿀 수 없게 함
 
 	/* 8진수(Octal) */
	// 0 1 2 3 4 5 6 7 10 11 12 13...
	
	/* 16진수(Hexadecimal) */
	// 0 1 2 3 4 5 6 7 8 9 A B C D E F 10
 

int main(){
	
	using namespace std;

	const float pi = 3.14f;
	int i = 12324; // uinsined
	int n = 5u;
	long n2 = 5L;
	double d = 6.0e-10;
	
	int x = 012; // 8진수
	cout << x << endl;
	
	int y = 0xF; // 16진수 
	cout << y << endl; 
		
	int z = 0b1010; // 16진수 
	cout << z << endl; 
	
		
	int k = 0b1011'1111'1010; // 16진수 
	cout << k << endl; 
	
	/* 매직넘버 사용은 좋지 않다. */
	int num_items = 123;
	int price = num_items * 10; // 여기서 10이 매직 넘버
	
	const int price_per_item = 10;
	price = num_items * price_per_item; 

	return 0;
}
