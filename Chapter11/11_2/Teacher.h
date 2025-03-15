#pragma once

#include "Person.h"

class Teacher : public Person // Person�� m_name ����
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
		// m_name�� Person class�� �ְ�
		// Teacher�� ȣ��Ǹ� Person�� ȣ��Ǵ� ��Ȳ
		// m_name�� Person class���� private�� ����Ǿ� �����Ƿ� �Ʒ��� ����
		// teacher.m_name�� ����� �� ����.
		// out << teacher.m_name;
		// teacher �� const�̹Ƿ� Person���� ã�ư��� getName()�� declaration�� const�� �ٲ��ֱ�
		out << teacher.getName();
		
		return out;
	}
};
