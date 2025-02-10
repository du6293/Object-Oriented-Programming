#include <iostream>



int main(void){
	
	using namespace std;
	
	int i = 123;
	float f = 123.456f;
	
	/* 주소 */
	void *my_void;
	
	/* data type이 다르고(int, float) data type의 size가 다르더라도
	data의 주소를 표현하는 data 양은 동일하다. */
	/*(void*)는 특정 data type을 지정하지 않는 포인터
	즉 어떤 타입의 변수 주소든 저장 가능하다.
	하지만 값을 직접 참조할 수 없으므로 type casting 필요하다. */
	my_void = (void*)&i; // int 변수 i의 주소를 void 포인터에 저장  
	my_void = (void*)&f; // float 변수 f의 주소를 void 포인터에 저장  
	
	return 0;
} 
