#include <iostream>

/* this �����Ϳ� ���� ȣ��(Chaining Member Functions) 
	this�� ��ü �ڽ��� �����ͷ�, �ڱ� �ڽ��� �ּҸ� ����ϰ� ����
	�� this�� ���� �ش� �ּҸ� ���� �ִ� �ν��Ͻ��� �ǹ���
*/

using namespace std;

class Simple
{
private:
	int _id;

public:
	Simple(int id)
	{
		// ���� �����Ͱ� ����Ű�� instance�� setID�� ȣ��
		this -> setID(id);
		//(*this).setID(id);
		
		// ���� �����Ͱ� ����Ű�� instance�� _id������ ����
		this->_id;

		// ���� instance�� �ּ� ����� �� this ���
		cout << this << endl;
	}

	// setID �Լ��� class �� ��� instance�� �����ϴ� �Լ��̴�
	void setID(int id)
	{
		_id = id;
	}
	int getID()
	{
		return _id;
	}
};

int main()
{
	// �� instance�� ���� this �����͸� ���� �ִ�.
	Simple s1(1), s2(2);
	
	// s1�� s2�� ���еǾ�� �Ѵ�.
	s1.setID(2);
	s2.setID(4);
	
	cout << &s1 << " " << &s2 << endl;

	// this �����͸� �ܺη� ������ ������ ����� ���� �ִ�.
	// Simple::setID(&s2, 4); 
	// s2.setID(4);

	return 0;
}
