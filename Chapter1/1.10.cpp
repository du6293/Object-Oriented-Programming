// 선언(declaration)
// 정의(definition) 


// 컴파일러는 위에서 아래로 순차적으로 읽는다.
// 따라서 함수가 main 아래에 위치하면 오류 발생 

// 아니면 함수명만 main 위로 올리기 > forward declaration
#include <iostream>

 
using namespace std;

//int add(int a, int b)
//{
//	return a + b;
//}

/* forward declaration */ 
int add(int a, int b);
int mul(int a, int b);
int sub(int a, int b);


int main()
{
	cout << add(1,2) << endl;
	cout << mul(1,2) << endl;
	cout << sub(1,2) << endl;
	
	
	return 0; 
	
}

/* main 위에 위치해야 한다. 아니면 forward declaration 하기*/
int add(int a, int b)
{
	return a + b;
}
/* definition */
int mul(int a, int b)
{
	return a * b;
}

int sub(int a, int b)
{
	return a - b;
}

