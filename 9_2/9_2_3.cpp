#include <iostream>
#include <fstream> // file ����� stream

/* ����� ������ (<<, >>) overloading �ϱ�
*/
using namespace std;

// case1. output stream (<<) overloading �ϱ�
// case2. input stream(>>) overloading �ϱ�
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

	// ��� ������ overloading
	// �Լ��� ù��° parameter�� output streamd�̴�. ���� member variable�� �ٷ� �� �� ����
	// point.m_x �̷��� ��� �Ѵ�.
	friend std::ostream& operator << (std::ostream &out, const Point &point)
	{
		out << "(" << point.m_x << " " << point.m_y << " " << point.m_z << ")";
		// p1 ��� ���� �ٷ� p2�� ����ؼ� chaining �Ϸ��� out�� return�ϵ��� ��
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
	// 9_2.cpp ��Ŭ�� > Open Containing Folder > Explorer > out.txt
	ofstream of("out.txt"); // file�� data�� ��� & of ��ü ����

	Point p1;
	Point p2;

	// input stream (>>) �����ڸ� class ������ overloading�ϰ� ����
	cin >> p1 >> p2;
	
	//p1�� p2�� member variable�� �������� �����
	// output stream (<<) �����ڸ� class ������ overloading�ϰ� ����
	cout << p1 << " " << p2 << endl; // console�� ���
	of << p1 << " " << p2 << endl; // of�� ���

	// close file stream
	of.close(); 



	return 0;
}
