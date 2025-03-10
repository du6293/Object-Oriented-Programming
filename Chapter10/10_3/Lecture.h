#pragma once

#include <vector>
#include "Student.h"
#include "Teacher.h"

class Lecture
{
private:
	std::string m_name;

	Teacher *teacher;
	// student�� �������� ���� �����ϱ� vector�� ����
	std::vector<Student*> students;

	// �̷��� �ϸ� registerStudent���� �Ķ������ copy�� �Ͼ�Ƿ� ���� ������ �ʴ� ���� �߻�
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
	// student�� vector�� �Ǿ� �ֱ� ������ parameter�� ������ student_input�� copy�Ǿ� �Լ� ������ ����ǰ� �ȴ�.
	// ���� push_back�Ǵ� �Ķ���Ϳ� ���������� ���� �ø����� ��ü�� memory address�� �ٸ���
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

		// �� for���� �ٸ��� pointer�� vector�� ����ϵ��� ��
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

