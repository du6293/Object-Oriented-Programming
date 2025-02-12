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


int main()
{
	// structure initialize할 때 uniform initialization 사용이 가능하다.
	Person me{2.0, 100.0, 20, "Jack"};

	me.print();

	return 0;
}
