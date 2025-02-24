#include <iostream>

/* this �����Ϳ� ���� ȣ��(Chaining Member Functions) 
	this�� �ڱ� �ڽ��� �ּҸ� ����ϰ� ����
	�� this�� ���� �ش� �ּҸ� ���� �ִ� �ν��Ͻ��� �ǹ���
	
	this �����͸� ������ ���������� ��� ������ �ҷ��� �� �ִ�. 
*/

using namespace std;

class Calc
{
private:
	int _value;

public:
	Calc(int init_value)
		: _value(init_value)
	{
	
	}
	
	void add(int value){_value += value;}
	void sub(int value){_value -= value;}
	void mul(int value){_value *= value;}
	


	void print() {cout << _value << endl;}
};

int main()
{
	
	// �����ϴ� ��� 
	Calc cal{10};

	cal.add(10);
	cal.sub(1);
	cal.mul(2);
	
	cal.print();	

	return 0;
}
