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
// const�� �ٿ��־��� ������ 
// copy�� ���� �ʰ�
// main������ ȣ���� �� ���Ǵ� �Ķ���Ϳ�
// ������ �ּ��� class instance�� ���޵ȴ�.
void print(const Something &st)
{

	cout << &st << endl;
	cout << st.getValue() << endl;
}

int main()
{
	Something something;
	
	// �Ʒ� �� ���� �ڵ带 �����ϸ�
	// constructor�� 1�� ����ȴ�.
	// print�Լ��� ������ �ּ��� instance�� ���޵ǹǷ�
	// ��µǴ� �ּҰ��� �����ϴ�.
	cout << &something << endl;
	print(something); 

	return 0;
}
