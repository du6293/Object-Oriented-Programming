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

// 함수의 return형으로 struct를 반환하는 것도 가능하다. 
Person getMe()
{
	Person me{ 2.0, 100.0, 20, "Jack" };
	return me;
}

int main()
{
	Person me_from_func = getMe();
	me_from_func.print();

	return 0;
}
