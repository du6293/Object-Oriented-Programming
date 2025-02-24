#include <iostream>
/* class와 const 
	class 내 함수 중 const를 붙여서 막을 수 있는 함수가 있다면 
	웬만하면 다 const를 붙여두는 게 좋다. 디버깅을 줄일 수 있다.
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

	// const를 함수명 다음에 붙이면 함수 내 멤버 변수를 변경할 수 없다.
	int getValue() const
	{
		return _value;
	}
};


int main()
{
	Something something;
	// something을 const로 선언하게 되면 아래 과정을 수행할 수 없다.
	something.setValue(3); 
	// something을 const로 선언하게 되면 아래 과정을 수행할 수 없다.
	// getValue()에서는 _value 값이 바뀌지 않지만 compiler는 const의 유무로만 판단함.
	cout << something.getValue() << endl;

	return 0;
}
