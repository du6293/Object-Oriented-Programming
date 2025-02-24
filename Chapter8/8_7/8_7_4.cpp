#include <iostream>

/* this 포인터와 연쇄 호출(Chaining Member Functions) 
	this는 자기 자신의 주소를 출력하게 해줌
	즉 this는 현재 해당 주소를 갖고 있는 인스턴스를 의미함
	
	this 포인터를 가지고 연쇄적으로 멤버 변수를 불러올 수 있다. 
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

	// 위 3개의 line과 동일하게 동작
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

	// 위 3 line과 동일하게 동작
	// class내 함수가 *this 즉 자기 자신을 return하므로 연쇄적으로 호출이 가능하다.
	cal.add(10).sub(1).mul(2).print();

	// 위 3 line과 동일하게 동작
	// class내 함수가 *this 즉 자기 자신을 return하므로 연쇄적으로 호출이 가능하다.
	Calc &temp1 = cal.add(10);
	Calc &temp2 = temp1.sub(1);
	Calc &temp3 = temp2.mul(2);
	temp3.print();
	


	return 0;
}
