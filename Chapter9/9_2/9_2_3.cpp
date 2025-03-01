#include <iostream>
#include <fstream> // file 입출력 stream

/* 입출력 연산자 (<<, >>) overloading 하기
*/
using namespace std;

// case1. output stream (<<) overloading 하기
// case2. input stream(>>) overloading 하기
class Point
{
private:
	// member variable
	double m_x, m_y, m_z;
public:
	// Constructor
	Point(double x = 0.0, double y = 0.0, double z = 0.0)
		:m_x(x), m_y(y), m_z(z)
	{}

	// member function
	double getX() { return m_x; }
	double getY() { return m_y; }
	double getZ() { return m_z; }

	// 출력 연산자 overloading
	// 함수의 첫번째 parameter가 output streamd이다. 따라서 member variable을 바로 쓸 수 없고
	// point.m_x 이렇게 써야 한다.
	friend std::ostream& operator << (std::ostream &out, const Point &point)
	{
		out << "(" << point.m_x << " " << point.m_y << " " << point.m_z << ")";
		// p1 출력 이후 바로 p2를 출력해서 chaining 하려고 out을 return하도록 함
		return out;
	}

	friend std::istream& operator >> (std::istream &in, Point& point)
	{
		in >> point.m_x >> point.m_y >> point.m_z;
		return in;
	}
};

int main()
{
	// 9_2.cpp 우클릭 > Open Containing Folder > Explorer > out.txt
	ofstream of("out.txt"); // file에 data를 출력 & of 객체 생성

	Point p1;
	Point p2;

	// input stream (>>) 연산자를 class 내에서 overloading하고 있음
	cin >> p1 >> p2;
	
	//p1과 p2의 member variable을 연속으로 출력함
	// output stream (<<) 연산자를 class 내에서 overloading하고 있음
	cout << p1 << " " << p2 << endl; // console로 출력
	of << p1 << " " << p2 << endl; // of로 출력

	// close file stream
	of.close(); 



	return 0;
}
