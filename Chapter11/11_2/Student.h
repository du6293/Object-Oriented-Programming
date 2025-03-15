#pragma once

#include "Person.h"

// Person class�� parent class�̰� Student class�� child class
// Person�� member variable�� m_name variable�� Student���� ����
// ���� Person�� constructor�� ȣ���ؼ� Student�� constructor�� ȣ��ǰ�
// Person���� ��ӹ��� m_name variable�� ���������� �ʱ�ȭ�ȴ�.
class Student : public Person
{
private:
	int m_intel; // intelligence;

	// TODO: more members like home address, phone, favorate food, habits, ...

public:
	// Student�� constructor�� ȣ���ؼ� Person�� constructor�� ȣ��
	Student(const std::string& name_in = "No Name", const int& intel_in = 0)
		: Person(name_in), m_intel(intel_in) // ������ Person�� ��ӹ޾����ϱ� �̷��� initialize
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
		// m_name�� Person class�� �ְ�
		// Student�� ȣ��Ǹ� Person�� ȣ��Ǵ� ��Ȳ
		// m_name�� Person class���� private�� ����Ǿ� �����Ƿ� �Ʒ��� ����
		// student.m_name�� ����� �� ����.
		//out << student.m_name << " " << student.m_intel;
		// student�� const�̹Ƿ� Person���� ã�ư��� getName()�� declaration�� const�� �ٲ��ֱ�
		out << student.getName() << " " << student.m_intel;
		return out;
	}


};
