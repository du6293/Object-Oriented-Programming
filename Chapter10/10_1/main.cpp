#include "Monster.h"

/* 구성(composition(class - subclass)) 관계 */
using namespace std;

int main()
{
	Monster mon1("Sansom", Position2D(0, 0));
	// mon1.m_location;

	cout << mon1 << endl;

	Monster mon2("Partival", Position2D(0, 0));
	// mon2.m_location;

	//while (1) 
	{
		mon1.moveTo(Position2D(1, 1));
		cout << mon1 << endl;
	}

	return 0;
}
