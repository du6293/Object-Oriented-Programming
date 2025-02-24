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


int main()
{
	Something something;
	// something�� const�� �����ϰ� �Ǹ� �Ʒ� ������ ������ �� ����.
	something.setValue(3); 
	// something�� const�� �����ϰ� �Ǹ� �Ʒ� ������ ������ �� ����.
	// getValue()������ _value ���� �ٲ��� ������ compiler�� const�� �����θ� �Ǵ���.
	cout << something.getValue() << endl;

	return 0;
}
