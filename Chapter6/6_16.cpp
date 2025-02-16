#include <iostream>

/* �����Ϳ� ������ ��� ���� ������(member selection operators) */
/* 
	�����Ϳ� ������ ����ü�� Ŭ������ ���� ����� ��, 
	�����Ϳ� ������ ���� ����ü�� Ŭ������ ����� ������ �� �ִ�. 
*/
using namespace std;

struct Person
{
	int age;
	double weight;
};

int main()
{
	Person person;

	person.age = 5;
	person.weight = 30;

	// ref == person
	Person &ref = person;
	ref.age = 15;
	ref.weight = 45;

	// ptr�� person�� ����Ű�� ����
	Person* ptr = &person;
	ptr->age = 30; // ������ ������ -> ���
	(*ptr).age = 20;

	// ref2 == *ptr == person
	Person &ref2 = *ptr;
	ref2.age = 45;

	// person, ref, ref2�� ���� memory address�� ���´�.
	cout << &person << endl;
	cout << &ref << endl;
	cout << &ref2 << endl;

	return 0;
}
