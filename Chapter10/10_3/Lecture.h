#pragma once

#include <vector>
#include "Student.h"
#include "Teacher.h"

class Lecture
{
private:
	std::string m_name;

	Teacher *teacher;
	// student가 여러명일 수도 있으니까 vector로 선언
	std::vector<Student*> students;

	// 이렇게 하면 registerStudent에서 파라미터의 copy가 일어나므로 값이 변하지 않는 문제 발생
	//Teacher teacher;
	//std::vector<Student> students;

public:
	Lecture(const std::string& name_in)
		: m_name(name_in)
	{}

	~Lecture()
	{
		// do NOT delete teacher
		// do NOT delete students
	}

	/*
	void assignTeacher(const Teacher& const teacher_input)
	{
		teacher = teacher_input;
	}
	*/

	
	void assignTeacher(Teacher * const teacher_input)
	{
		teacher = teacher_input;
	}
	
	/*
	// student가 vector로 되어 있기 때문에 parameter로 들어오는 student_input은 copy되어 함수 내에서 실행되게 된다.
	// 따라서 push_back되는 파라미터와 실질적으로 값을 올리려는 객체의 memory address가 다르다
	void registerStudent(const Student& const student_input) 
	{
		// &student_input != &students[0]
		students.push_back(student_input);
	}
	*/

	void registerStudent(Student * const student_input)
	{
		students.push_back(student_input);
	}
	

	void study()
	{
		std::cout << m_name << " Study " << std::endl << std::endl;

		/*
		for (auto& element : students) // Note: 'auto element' does not work (value does not update)
			element.setIntel((element).getIntel() + 1); 
		*/

		// 위 for문과 다르게 pointer의 vector를 사용하도록 함
		for (auto &element: students) // Note: 'auto element' work
			(*element).setIntel((*element).getIntel() + 1);
			// element -> setIntel(element->getIntel() + 1);		
	}

	friend std::ostream& operator << (std::ostream& out, const Lecture& lecture)
	{
		out << "Lecture name : " << lecture.m_name << std::endl;

		out << lecture.teacher << std::endl;

		for (auto element : lecture.students)
			out << *element << std::endl;

		/*
		out << *lecture.teacher << std::endl;

		for(auto element : lecture.students)
			out << *element << std::endl;
		*/

		return out;
	}
}; 

