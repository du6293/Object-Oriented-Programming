#pragma once

#include <string>
#include "Position2D.h"

class Monster
{
private:
	std::string m_name;
	// Position2D 클래스는 Monster 클래스의 sub-class이다.
	Position2D m_location; // Monster class가 Position을 사용하는 경우를 composition이라 한다.
	
	// m_x와 m_y를 Position2D 라는 클래스에 담음
	// int m_x;
	// int m_y;

public:

	// constructor
	Monster(const std::string name_in, const Position2D & pos_in)
		: m_name(name_in), m_location(pos_in)
	{}
	void moveTo(const Position2D& pos_target)
	{
		m_location.set(pos_target);
	}

	friend std::ostream& operator << (std::ostream& out, const Monster & monster)
	{
		out << monster.m_name << " " << monster.m_location;
		return out;
	}

};

