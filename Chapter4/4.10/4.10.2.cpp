#include <iostream>

using namespace std;

// 함수가 구조체 안에 있을 때
struct Person
{
	double	height;
	float	weight;
	int		age;
	string	name;

	void print()
	{
		cout << height << " " << weight << " " << age << " " << name;
		cout << endl;
	}
};

// struct 내부에 struct를 넣는 것도 가능하다
struct Family
{
	Person me;
	Person mom;
	Person dad;
};

int main()
{
	// structure initialize할 때 uniform initialization 사용이 가능하다.
	Person me1{2.0, 100.0, 20, "Jack"};
	Person me2(me1);

	me1.print();
	me2.print();

	return 0;
}
