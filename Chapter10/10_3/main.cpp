#include <iostream>
#include <vector>
#include <string>
#include "Lecture.h"

/* ����(Association) ���� */
using namespace std;

int main()
{
	 
	//	std1, std2, std3, teacher1, teacher2�� main�Լ��� ���� local variable�̴�. 
	//	main�Լ��� ������ �����
	Student std1("Jack Jack", 0);
	Student std2("Dash", 1);
	Student std3("Violet", 2);

	Teacher teacher1("Prof. Hong");
	Teacher teacher2("Prof. Good");

	/*
	// ���� std1~std3, teacher1~teacher2�� �ٸ� �Ϲ� �Լ��� ����Ǿ� �־ ���� �Լ����� ���Ǿ�� �Ѵٸ� ������ ���� ���� ����
	// ���� memory address�� �ִ� ������ ���� �Լ����� ������ �� �ְ� ��/
	// �� �л� ó���� �ؾ� �ϴ� ��� ��ǻ���� �޸𸮰� ���� �и��Ǿ� �ֱ� ������ �� ������� ������ �� ����.
	// ���� ��ǻ�Ϳ� �ִ� student1�� �纻�� synchronize�� �Ǿ�� �Ѵ�.
	Student *ptr_std1 = new Student("Jack Jack", 0);
	Student *ptr_std2 = new Student("Dash", 1);
	Student *ptr_std3 = new Student("Violet", 2);

	Teacher *ptr_teacher1 = new Teacher("Prof. Hong");
	Teacher *ptr_teacher2 = new Teacher("Prof. Good");
	*/

	// Composition Relationship
	Lecture lec1("Introduction to Computer Programming");
	lec1.assignTeacher(&teacher1);
	lec1.registerStudent(&std1); // lec2�� Jack Jack�� �̸��� ���������� memory address�� �ٸ���
	lec1.registerStudent(&std2);
	lec1.registerStudent(&std3);

	Lecture lec2("Computational Thinking");
	lec2.assignTeacher(&teacher2);
	lec2.registerStudent(&std1);

	/*
	// Composition Relationship
	Lecture lec1("Introduction to Computer Programming");
	lec1.assignTeacher(teacher1);
	lec1.registerStudent(std1); // lec2�� Jack Jack�� �̸��� ���������� memory address�� �ٸ���
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
	* new�� ���������ϱ� delete�� ������� ��
	delete std1;
	delete std2;
	delete std3;

	delete teacher1;
	delete teacher2;
	*/

	return 0;
}
