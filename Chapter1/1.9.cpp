#include <iostream>


// 1. 빈 줄, 즉 여백은 컴파일러가 무시한다.
// 2. indentation 맞추기
// 3.함수 {} 는 무조건 가장 앞쪽에 배치

//하드 코딩은 프로그래머가 코드에서 변수값을 리터럴 같이
//고정된 값으로 직접 대입하는 방식.

//소프트 코딩은 프로그램 실행 중 사용자의 입력이나 외부 파일, 
// 인터넷 통신 등으로 데이터를 가져오는 방식.  

using namespace std;


int add(int x, int y) 
{
	return x + y; // indending, tab = space * 4
}

int main()
{
	//4.주석은 위에 다는 게 더 좋다. 
	int a 		= 50; // 5.변수 끼리 = 일정하게 맞춰주기 
	
	//이렇게 변수 별로 주석 위에 달아 주기 
	int b 		= 78;
	int c 		= 123;
	add(a, b);
	
	cout << "Hello, 		World" << "abcedf" << // 6. 줄바꿈 표시 
			"Hello 	Home " << endl;
	
	
	return 0; 
	
}
