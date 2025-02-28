#include <iostream>
/* anonymous 객체 (익명 객체) 
	객체를 사용할 때 이름이 붙은 변수를 사용하지 않고
	바로 사용하는 객체
*/
using namespace std;

class A
{
public:
	int m_value;

	A(const int& input)
		: m_value(input)
	{
		cout << "Constructor" << endl;
	}

	A()
	{
		cout << "Constructor" << endl;
	}
	~A()
	{
		cout << "Destructor" << endl;
	}
	void printDouble()
	{
		cout << m_value * 2 << endl;
	}
};


int main()
{
	A a(1);
	a.printDouble();

	A(1).printDouble();
	return 0;
}
