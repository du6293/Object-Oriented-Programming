#include <iostream>
/* static member function (���� ��� �Լ�) */

/*
	this: Ư�� instance�� �ּҸ� �޾Ƽ�,
		�� instance�� ���� �ִ� member���� address�� ������ ����ϰ� ��
*/
using namespace std;

class Something
{
public:
	static int s_value;
	int m_value;

public:
	// constructor ���� member variable�� initialization���� �� 
	// static variable�� initialization�� �ȵȴ�.
	Something()
		: m_value(123)//, s_value(1024)
	{}

	// static member function�� instance ���� ȣ��ǹǷ� this�� ����� �� ����.
	// static member function�� instance variable�� ������ �� ����.
	static int getValue()
	{
		return s_value;
		// ���� ��ü�� ���ϴ� �����̹Ƿ� static member function �Լ����� ���� ������ �� ����.
		// return m_value;
	}
	// static�� �ƴ� �Ϲ� member function�� this�� ����� �� �ִ�.
	int temp()
	{
		return this -> s_value ;
	}
};

int Something::s_value = 1024;

int main()
{
	// static member function�� ����ؼ� static member ������ ������ �� �ִ�.
	cout << Something::getValue() << endl;

	// class ��ü 2�� ����
	Something s1, s2;
	// s1�� s2�� mvalue�� memory address�� �ٸ���.
	// ������ function�� memory address�� ����.
	// ���� function�� memory address�� Ư�� instance�� �������� �ʴ�.




	return 0;
}
