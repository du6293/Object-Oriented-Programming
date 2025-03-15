#include <iostream>
#include "Student.h"
#include "Teacher.h"

/* ����� �⺻ (2)*/
/* �ڵ忡�� �ߺ��Ǵ� �κ��� �� ���� ��Ƶΰ� �����ؼ� �۾����� ���̴� ���� ����.  */
/* class�� ������ header file�� ����� �� ����. */
using namespace std;

int main()
{
	Student std("Jack Jack");
	std.setName("Jack Jack 2");
	std::cout << std.getName() << std::endl;

	Teacher teacher1("Dr. H");

	std::cout << teacher1.getName() << std::endl;

	std::cout << std << std::endl;
	std::cout << teacher1 << std::endl;

	std.doNothing();
	teacher1.doNothing();

	std.study();
	teacher1.teach();

	Person person;
	person.setName("Mr. Incredible");
	person.getName();

	// study()�� Student.h(child class)��
	// teach()�� Teacher.h(child class)�� �����Ƿ� person�� ��� x
	// person.study();
	// person.teach();


	return 0;
}
