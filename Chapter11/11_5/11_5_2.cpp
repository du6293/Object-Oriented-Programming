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

// Derived�� Base�� protected���� ��ӹ���
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
	// private�� protected�� �ܺο��� ���� �Ұ�
	// derived.m_public = 1024;
	//derived.m_protected;
	//derived.m_private;

	return 0;
}
