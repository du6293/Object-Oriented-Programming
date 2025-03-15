#pragma once

#include "Person.h"

class Teacher : public Person // Person에 m_name 있음
{
private:
	//TODO: more members like home address, salary, age, evaluation, etc.

public:
	Teacher(const std::string& name_in = "No Name")
		: Person(name_in)
	{
		this->getName();
	}
	
	void teach()
	{
		std::cout << getName() << "is teaching " << std::endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Teacher& teacher)
	{
		// m_name은 Person class에 있고
		// Teacher가 호출되면 Person이 호출되는 상황
		// m_name은 Person class에서 private로 선언되어 있으므로 아래와 같이
		// teacher.m_name을 사용할 수 없다.
		// out << teacher.m_name;
		// teacher 가 const이므로 Person으로 찾아가서 getName()의 declaration도 const로 바꿔주기
		out << teacher.getName();
		
		return out;
	}
};
