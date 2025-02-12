#include <iostream>

/* 
	����ü(struct) 
	�ϳ��� user define �ڷ����� ��ó�� ����� ����������.
	���� ���� type data�� �ϳ��� ������ �� �ִ�.
*/

using namespace std;

struct Person
{
	double	height;
	float	weight;
	int		age;
	string	name;
};

// �Լ��� ����ü �ٱ��� ���� ��
void printPerson(Person ps)
{	

	// (����ü �̸�).(��� ����)
	// .�� member selection operator�̴�.
	cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name;
	cout << endl;
}

int main()
{
	// structure initialize�� �� uniform initialization ����� �����ϴ�.
	Person me{2.0, 100.0, 20, "Jack"};
	
	/*
	���� C style�� structure initialization
	me.age = 20;
	me.name = seondeok;
	me.height = 2.0;
	me.weight = 100.0;
	*/
	
	printPerson(me);

	return 0;
}