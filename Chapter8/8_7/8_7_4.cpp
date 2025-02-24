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
	/*
	void add(int value){_value += value;}
	void sub(int value){_value -= value;}
	void mul(int value){_value *= value;}
	*/

	// �� 3���� line�� �����ϰ� ����
	Calc& add(int value) { _value += value; return *this;}
	Calc& sub(int value) { _value -= value; return *this;}
	Calc& mul(int value) { _value *= value; return *this;}

	void print() {cout << _value << endl;}
};

int main()
{
	
	Calc cal{10};

	/*
	cal.add(10);
	cal.sub(1);
	cal.mul(2);
	cal.print();
	*/



	/* Chaining member functions */

	// �� 3 line�� �����ϰ� ����
	// class�� �Լ��� *this �� �ڱ� �ڽ��� return�ϹǷ� ���������� ȣ���� �����ϴ�.
	cal.add(10).sub(1).mul(2).print();

	// �� 3 line�� �����ϰ� ����
	// class�� �Լ��� *this �� �ڱ� �ڽ��� return�ϹǷ� ���������� ȣ���� �����ϴ�.
	Calc &temp1 = cal.add(10);
	Calc &temp2 = temp1.sub(1);
	Calc &temp3 = temp2.mul(2);
	temp3.print();
	


	return 0;
}
