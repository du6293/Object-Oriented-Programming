#include <iostream>


using namespace std;

// �Լ��� ����ü �ȿ� ���� ��
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
	// structure initialize�� �� uniform initialization ����� �����ϴ�.
	Person me{2.0, 100.0, 20, "Jack"};

	me.print();

	return 0;
}
