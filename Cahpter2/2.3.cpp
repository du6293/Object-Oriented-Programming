#include <iostream>


int main(void){
	
	using namespace std;
	
	std::int16_t i(5);
	std::int8_t myint = 65; // char type으로 변환 
	
	cout << myint << endl;
	
	std::int_fast8_t fi(5); // 8 bit size 이상의 크기를 가지며 가장 빠른 연산 속도의 data type 선택  
	std::int_least64_t fl(5);// 최소 64 bit 이상의 크기를 갖는 가장 작은  정수형 선택  
	
	return 0;
} 
