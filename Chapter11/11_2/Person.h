#pragma once

#include <iostream>
#include <string>
/* Person.h는 Student.h와 Teacher.h의 공통된 코드를 갖고 있는 부분 
	class 별로 공통된 코드를 별도의 header file로 만들어준다.
*/

// 여기 선언해주면 Person.h를 include하는 모든 파일들에 적용되므로 std::를 사용하는 것 권장
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

	// constructor 생성
	// child class에서 공통적으로 갖고 있는 member variable을 
	// 초기화하는 constructor도 Person.h에 선언해줌
	Person(const std::string& name_in = "No Name")
		: m_name(name_in)
	{}

	// setName과 getName은 Teacher.h와 Student.h에 모두 있으므로
	// Person.h에 넣기
	void setName(const std::string& name_in)
	{
		m_name = name_in;
	}

	std::string getName() const
	{
		return m_name;
	}

	// function name 우클릭 > Quick actions and Refactorings > Move definition Location
	void doNothing() const
	{
		std::cout << m_name << " is doing nothing " << std::endl;
	}
};
