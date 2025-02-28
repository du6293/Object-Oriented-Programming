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

	cout << s1.getValue() << endl;
	//cout << s1.s_value << endl;
	
	// (�º�) Something�̶�� class�� member function(temp)�� pointer�� �����´ٴ� �ǹ�
	// (�캯) Something�̶�� class�� �����ִ� temp��� member function �̶�� �ǹ�
	int (Something::*fptr1)() = &Something::temp;

	// ������ fptr ��ġ�� �ִ� �Լ� temp�� �����ų �� 
	// s2��� instance�� point�� �Ѱ��ְ�
	// s2 instance�� this pointer�� �����ٰ� �ű⼭ ����ϴ� ���·� ����
	cout << (s2.*fptr1)() << endl;

	// (�º�) Something�̶�� class�� member function(getValue)�� pointer�� �����´ٴ� �ǹ�
	// �� �� static �Լ��� Ư�� instance�� ������� ������ ��ų �� �ִ� �Լ��̹Ƿ� 
	// class ������ ������ �ʾƵ� �ȴ�.
	// (�캯) Something�̶�� class�� �����ִ� temp��� member function �̶�� �ǹ�
	int (*fptr2)() = &Something::getValue;
	cout << fptr2() << endl;

	return 0;
}
