#include <iostream>
/* derivede된 class들의 생성과 초기화 */
using namespace std;

class Mother
{
public:
	int m_i;

	Mother(const int& i_in = 0)
		:m_i(i_in)
	{
		cout << "Mother construction " << endl;
	}
};

// Child 는 Mother로부터 derive된 class
// Mother class의 member variable도 모두 받기 때문에
// memory 할당 크기가 커진다.
class Child : public Mother
{
public:
	double m_d;
	//int m_temp;
public:
	Child()
		//	: Mother(1024), m_d(1.0) // Mother class로 가서 constructor 호출하고 나서 Child constructor 호출
		: m_d(1.0), Mother(1024) // 순서가 바뀌어도 compiler는 Mother class로 가서 constructor 호출하고 나서 Child constructor 호출
	{
		cout << "Child construction " << endl;
	}
};

int main()
{

	Child c1;

	cout << sizeof(Mother) << endl; // 4 byte
	// Mother size + Child size
	cout << sizeof(Child) << endl; // 4 byte + 12 byte + 12 byte (padding)

	return 0;
}
