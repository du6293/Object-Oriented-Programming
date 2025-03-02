#include <iostream>
#include <array>
/* 다양한 return value들 (값, 참조, 주소, 구조체, 튜플)*/
using namespace std;
/* Case3. return type이 structure일 때 
여러 개의 값을 return하고 싶을 때 주로 사용한다. 
함수 1개를 만들 때마다 구조체를 만들어 주어야 한다.
따라서 구현 overhead가 크다.
*/

struct S
{
	int a, b, c, d;
};

S getStruct() 
{
	S my_s{ 1,2,3,4 };
	return my_s;
}

int main()
{
	S my_s = getStruct();

	return 0;
}
