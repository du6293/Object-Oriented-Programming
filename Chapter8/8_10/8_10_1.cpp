#include <iostream>

/* static member variable*/

using namespace std;

class Something
{
public:
	// class �� member variable�� variable�� initialize�� �� ����.
	static int _value ;
};

int Something::_value = 1;

int main()
{
	// Something class�� instance�� �������ֱ� ��
	cout << &Something::_value << " " << Something::_value << endl;

	Something st1;
	Something st2;

	// st1, st2�� member variable�� �޸� �ּҰ� �����ϴ�.
	st1._value = 2;

	// st1�� st2�� memory address�� variable ���� ����.
	cout << &st1._value << " " << st1._value << endl;
	cout << &st2._value << " " << st2._value << endl;

	st1._value = 1024;

	// Something class�� instance�� �������ְ� �� ��
	cout << &Something::_value << " " << Something::_value << endl;

	// Something class�� instance�� �������ֱ� ���� ���� memory address�� �����ϴ�.
	// member variable�� static���� ����Ǿ��� ����
	return 0;
}
