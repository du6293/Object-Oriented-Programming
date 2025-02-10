// 객체(objects): 메모리에 저장되어 있는 정보
// 변수(variables): 메모리에 담겨있는 객체
// Left-values: 등호 기준 왼쪽 값 
// Right-values: 등호 기준 오른쪽 값 
// Initialization:
// Assignment:


#include <iostream>

int main() 
{
	int x ;
	x = 123; // assignment

	std::cout << x << std::endl;
	std::cout << &x << std::endl;
	return 0;
}
