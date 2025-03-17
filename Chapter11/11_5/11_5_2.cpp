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

// Derived는 Base를 protected으로 상속받음
// m_public: public, protected -> protected
// m_protected: protected, protected -> protected
// m_private: private, protected -> private
class Derived : protected Base
{
public:
	Derived()
	{
		Base::m_public;
		Base::m_protected;
		//Base::m_private; // not accessive
	}
};

int main()
{
	Derived derived;
	// private와 protected는 외부에서 접근 불가
	// derived.m_public = 1024;
	//derived.m_protected;
	//derived.m_private;

	return 0;
}
