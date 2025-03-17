#include <iostream>

using namespace std;

class Base
{
public:
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};

// Derived는 Base를 private으로 상속받음
// m_public: public, private -> private
// m_protected: protected, private -> private
// m_private: private, private -> private
class Derived : private Base
{
public:
	Derived()
	{
		Base::m_public;
		Base::m_protected;
		//Base::m_private; // not accessive
	}
};

// Derived는 Base를 private으로 상속받음
// GrandChild는 Derived를 public으로 상속받음
// 따라서 Base 내 public으로 선언되어 있는 public member variable을 public으로 접근 불가
class GrandChild : public Derived
{
public:
	GrandChild()
	{
		//Derived::m_public;
	}
};

int main()
{
	Derived derived;
	

	return 0;
}
