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
	
	void add(int value){_value += value;}
	void sub(int value){_value -= value;}
	void mul(int value){_value *= value;}
	


	void print() {cout << _value << endl;}
};

int main()
{
	
	// 권장하는 방법 
	Calc cal{10};

	cal.add(10);
	cal.sub(1);
	cal.mul(2);
	
	cal.print();	

	return 0;
}
