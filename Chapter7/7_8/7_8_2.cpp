#include <iostream>

/* Default Parameters (매개변수의 기본값) */
using namespace std;

// go to header file -> default parameter 확인 
void print(int x = 10, int y = 20, int z = 30);

// header file에 정의가 되어 있기 때문에 default 값을 주면 안됨
void print(int x, int y, int z) 
{
	cout << x << " " << y << " " << z << endl;
}

int main()
{
	print();
	print(100); // x에 값이 들어감
	print(100, 200); // x, y에 값이 들어감 
	print(100, 200, 300); // x, y, z에 값이 들어감 
	
	return 0;
}
