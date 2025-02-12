#include <iostream>
#include <bitset>



int main()
{
	using namespace std;
	
	/* Data Type을 Initialization하는 방식 */
	/* Copy Initialization  */
	int i = 5.123; //5.123을 integer로 변환한 다음 메모리에 저장 
	/* Direct Initialization: ()를 사용한 initialization */
	int a((int)5.123);	//자동으로 5로 변환  
	/* Uniform Initialization: {}를 사용한 initialization, 모든 type의 변수를 initialization 할 수 있는 방법  */
	/* 어떤 변수에 해당 변수가 저장할 수 있는 크기보다 더 큰 크기의 데이터를 저장할 경우
	일부 데이터의 손실이 발생하는 것을 방지한다. */
	float b{5.123};
	
	cout << i << endl;
	cout << a << endl;
	cout << b << endl; 
	
	/* 사용할 변수를 처음에 모아서 선언하기 보다
	사용하기 바로 직전에 선언해서 메모리를 할당해 놓는 것이 더 좋다. */
	/* 변수를 선언한 부분과 변수를 사용하는 부분이 가까워야 
	debugging 하거나 refactoring 할 때 편하기 때문이다. */
	int k = 0, l(456), m{123};
	
	/* 권장하지 않는 initialization 방식 */
	// int k, l, m= 123;
	
	cout << k << endl;
	cout << l << endl;
	cout << m << endl;
	
	  
	
	
	return 0;
} 
