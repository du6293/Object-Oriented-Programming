#include <iostream>
/* class�� const 
	class �� �Լ� �� const�� �ٿ��� ���� �� �ִ� �Լ��� �ִٸ� 
	�����ϸ� �� const�� �ٿ��δ� �� ����. ������� ���� �� �ִ�.
*/
using namespace std;

class Something
{
public:
	int _value = 0;

	Something()
	{
		cout << "Constructor " << endl;
	}

	// copy constructor (��� �ڵ����� ���� �ִ� constructor)
	Something(const Something& st_in)
	{
		_value = st_in._value;
		cout << "Copy constructor " << endl;
	}

	// void setValue(int value) const
	void setValue(int value)
	{
		_value = value;
	}

	// const�� �Լ��� ������ ���̸� �Լ� �� ��� ������ ������ �� ����.
	int getValue() const
	{
		return _value;
	}
};

// print �Լ� ȣ�� �� �Ķ���Ϳ� �� st�� 
// main������ ȣ���� �� ���Ǵ� �Ķ���Ͱ� copy��
// �ٸ� class instance�̴�.
// �� class �� �����ִ� copy constructor�� ���� ����Ǵ� ���̴�. 
void print(Something st)
{

	cout << &st << endl;
	cout << st._value << endl;
}

int main()
{
	Something something;
	
	// �Ʒ� �� ���� �ڵ带 �����ϸ�
	// constructor�� 1�� ����ȴ�.
	// print�Լ��� ���� class �� copy constructor�� ����Ǳ� �����̴�.
	// ���� ��µǴ� �ּҰ��� �ٸ���.
	cout << &something << endl; // copy �Ǳ� ���� �ּ�
	print(something); // copy�� ���� �ּ�

	return 0;
}
