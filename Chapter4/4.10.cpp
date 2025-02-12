#include <iostream>

/* 
	구조체(struct) 
	하나의 user define 자료형인 것처럼 사용이 가능해진다.
	여러 가지 type data를 하나로 묶어줄 수 있다.
*/

using namespace std;

struct Person
{
	double	height;
	float	weight;
	int		age;
	string	name;
};

// 함수가 구조체 바깥에 있을 때
void printPerson(Person ps)
{	

	// (구조체 이름).(멤버 변수)
	// .은 member selection operator이다.
	cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name;
	cout << endl;
}

int main()
{
	// structure initialize할 때 uniform initialization 사용이 가능하다.
	Person me{2.0, 100.0, 20, "Jack"};
	
	/*
	기존 C style로 structure initialization
	me.age = 20;
	me.name = seondeok;
	me.height = 2.0;
	me.weight = 100.0;
	*/
	
	printPerson(me);

	return 0;
}