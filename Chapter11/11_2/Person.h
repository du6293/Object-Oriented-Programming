#pragma once

#include <iostream>
#include <string>
/* Person.h�� Student.h�� Teacher.h�� ����� �ڵ带 ���� �ִ� �κ� 
	class ���� ����� �ڵ带 ������ header file�� ������ش�.
*/

// ���� �������ָ� Person.h�� include�ϴ� ��� ���ϵ鿡 ����ǹǷ� std::�� ����ϴ� �� ����
// using namespace std;

class Person
{
public:
	std::string m_name;

public:
	/*
	Person()
		: m_name("No Name")
	{}
	*/

	// constructor ����
	// child class���� ���������� ���� �ִ� member variable�� 
	// �ʱ�ȭ�ϴ� constructor�� Person.h�� ��������
	Person(const std::string& name_in = "No Name")
		: m_name(name_in)
	{}

	// setName�� getName�� Teacher.h�� Student.h�� ��� �����Ƿ�
	// Person.h�� �ֱ�
	void setName(const std::string& name_in)
	{
		m_name = name_in;
	}

	std::string getName() const
	{
		return m_name;
	}

	// function name ��Ŭ�� > Quick actions and Refactorings > Move definition Location
	void doNothing() const
	{
		std::cout << m_name << " is doing nothing " << std::endl;
	}
};
