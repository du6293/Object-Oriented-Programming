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

// Derived�� Base�� private���� ��ӹ���
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

// Derived�� Base�� private���� ��ӹ���
// GrandChild�� Derived�� public���� ��ӹ���
// ���� Base �� public���� ����Ǿ� �ִ� public member variable�� public���� ���� �Ұ�
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
