#include <iostream>
#include <vector>
#include <string>
#include "Lecture.h"

/* 집합(Association) 관계 */
using namespace std;

int main()
{
	 
	//	std1, std2, std3, teacher1, teacher2는 main함수에 속한 local variable이다. 
	//	main함수가 끝나면 사라짐
	Student std1("Jack Jack", 0);
	Student std2("Dash", 1);
	Student std3("Violet", 2);

	Teacher teacher1("Prof. Hong");
	Teacher teacher2("Prof. Good");

	/*
	// 만약 std1~std3, teacher1~teacher2가 다른 일반 함수에 선언되어 있어서 여러 함수에서 사용되어야 한다면 다음과 같이 선언 가능
	// 같은 memory address에 있는 변수를 여러 함수들이 공유할 수 있게 됨/
	// 단 분산 처리를 해야 하는 경우 컴퓨터의 메모리가 각각 분리되어 있기 때문에 이 방식으로 구현할 수 없다.
	// 여러 컴퓨터에 있는 student1의 사본이 synchronize가 되어야 한다.
	Student *ptr_std1 = new Student("Jack Jack", 0);
	Student *ptr_std2 = new Student("Dash", 1);
	Student *ptr_std3 = new Student("Violet", 2);

	Teacher *ptr_teacher1 = new Teacher("Prof. Hong");
	Teacher *ptr_teacher2 = new Teacher("Prof. Good");
	*/

	// Composition Relationship
	Lecture lec1("Introduction to Computer Programming");
	lec1.assignTeacher(&teacher1);
	lec1.registerStudent(&std1); // lec2의 Jack Jack과 이름은 동일하지만 memory address가 다르다
	lec1.registerStudent(&std2);
	lec1.registerStudent(&std3);

	Lecture lec2("Computational Thinking");
	lec2.assignTeacher(&teacher2);
	lec2.registerStudent(&std1);

	/*
	// Composition Relationship
	Lecture lec1("Introduction to Computer Programming");
	lec1.assignTeacher(teacher1);
	lec1.registerStudent(std1); // lec2의 Jack Jack과 이름은 동일하지만 memory address가 다르다
	lec1.registerStudent(std2);
	lec1.registerStudent(std3);

	Lecture lec2("Computational Thinking");
	lec2.assignTeacher(teacher2);
	lec2.registerStudent(std1);
	*/


	// TODO: implement Aggregation Relationship
	// test
	{
		cout << lec1 << endl;
		cout << lec2 << endl;

		// event
		lec2.study();

		cout << lec1 << endl;
		cout << lec2 << endl;
	}

	/*
	* new로 선언했으니까 delete로 지워줘야 함
	delete std1;
	delete std2;
	delete std3;

	delete teacher1;
	delete teacher2;
	*/

	return 0;
}
