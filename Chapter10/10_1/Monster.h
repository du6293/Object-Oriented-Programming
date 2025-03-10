#pragma once

#include <string>
#include "Position2D.h"

class Monster
{
private:
	std::string m_name;
	// Position2D Ŭ������ Monster Ŭ������ sub-class�̴�.
	Position2D m_location; // Monster class�� Position�� ����ϴ� ��츦 composition�̶� �Ѵ�.
	
	// m_x�� m_y�� Position2D ��� Ŭ������ ����
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

