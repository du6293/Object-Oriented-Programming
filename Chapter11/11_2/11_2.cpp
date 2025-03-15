#include <iostream>
#include "Student.h"
#include "Teacher.h"

/* 상속의 기본 (2)*/
/* 코드에서 중복되는 부분을 한 군데 모아두고 재사용해서 작업량을 줄이는 것이 좋다.  */
/* class는 별도의 header file로 만드는 게 좋다. */
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

	// study()는 Student.h(child class)에
	// teach()는 Teacher.h(child class)에 있으므로 person이 사용 x
	// person.study();
	// person.teach();


	return 0;
}
