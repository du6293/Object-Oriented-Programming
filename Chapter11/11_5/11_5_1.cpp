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

// Derived는 Base를 public으로 상속받음
// m_public: public, public -> public
// m_protected: protected, public -> protected
// m_private: private, public -> private
class Derived : public Base
{
public:
	Derived()
	{
		m_public = 123;
		m_protected = 123; // In child class, accessible
		//m_private = 123; // In child class, not accessible
	}
};

int main()
{
	Derived derived;
	derived.m_public = 1024;
	//derived.m_protected;
	//derived.m_private;

	return 0;
}
