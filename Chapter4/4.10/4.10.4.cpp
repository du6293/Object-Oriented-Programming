#include <iostream>

/* 
	구조체(struct) 
	하나의 user define 자료형인 것처럼 사용이 가능해진다.
	여러 가지 type data를 하나로 묶어줄 수 있다.
*/

using namespace std;

// 함수가 구조체 안에 있을 때
struct Person
{
	double	height = 3.0;
	float	weight = 200;
	int		age = 100;
	string	name = "Mr. Incredible";
};

int main()
{
	// default로 정의된 값보다 내가 임의로 지정한 값이 들어감
	Person me{ 2.0, 100.0, 20, "Jack" };
	cout << me.name << endl;

	return 0;
}
