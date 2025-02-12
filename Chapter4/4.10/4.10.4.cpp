#include <iostream>

using namespace std;

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
