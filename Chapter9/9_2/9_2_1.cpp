#include <iostream>
/* 입출력 연산자 (<<, >>) overloading 하기


*/
using namespace std;

class Point
{
private:
	double m_x, m_y, m_z;
public:
	// Constructor
	Point(double x = 0.0, double y = 0.0, double z = 0.0)
		:m_x(x), m_y(y), m_z(z)
	{

	}
	double getX() { return m_x; }
	double getY() { return m_y; }
	double getZ() { return m_z; }

	void print()
	{
		cout << m_x << " " << m_y << " " << m_z;
	}
};

int main()
{
	Point p1(0.0, 0.1, 0.2);
	Point p2(3.4, 1.5, 2.0);
	
	// 각 instance의 member variable 값 출력 
	p1.print();
	cout << " ";
	p2.print();
	cout << endl;

	return 0;
}
