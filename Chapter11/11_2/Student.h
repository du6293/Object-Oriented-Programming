#pragma once

#include "Person.h"

// Person class가 parent class이고 Student class가 child class
// Person의 member variable인 m_name variable은 Student에서 사용됨
// 따라서 Person의 constructor를 호출해서 Student의 constructor가 호출되고
// Person에서 상속받은 m_name variable이 간접적으로 초기화된다.
class Student : public Person
{
private:
	int m_intel; // intelligence;

	// TODO: more members like home address, phone, favorate food, habits, ...

public:
	// Student의 constructor를 호출해서 Person의 constructor를 호출
	Student(const std::string& name_in = "No Name", const int& intel_in = 0)
		: Person(name_in), m_intel(intel_in) // 이제는 Person을 상속받았으니까 이렇게 initialize
	{}

	void setIntel(const int& intel_in)
	{
		m_intel = intel_in;
	}

	int getIntel()
	{
		return m_intel;
	}

	void study()
	{
		std::cout << getName() << "is studying " << std::endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Student& student)
	{
		// m_name은 Person class에 있고
		// Student가 호출되면 Person이 호출되는 상황
		// m_name은 Person class에서 private로 선언되어 있으므로 아래와 같이
		// student.m_name을 사용할 수 없다.
		//out << student.m_name << " " << student.m_intel;
		// student가 const이므로 Person으로 찾아가서 getName()의 declaration도 const로 바꿔주기
		out << student.getName() << " " << student.m_intel;
		return out;
	}


};
