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

	Something()
	{
		cout << "Constructor " << endl;
	}

	// copy constructor (사실 자동으로 숨어 있는 constructor)
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

	// const를 함수명 다음에 붙이면 함수 내 멤버 변수를 변경할 수 없다.
	int getValue() const
	{
		return _value;
	}
};

// print 함수 호출 시 파라미터에 들어갈 st는 
// main문에서 호출할 때 사용되는 파라미터가 copy된
// 다른 class instance이다.
// 즉 class 내 숨어있는 copy constructor로 인해 실행되는 것이다. 
void print(Something st)
{

	cout << &st << endl;
	cout << st._value << endl;
}

int main()
{
	Something something;
	
	// 아래 두 줄이 코드를 실행하면
	// constructor는 1번 실행된다.
	// print함수로 인해 class 내 copy constructor가 실행되기 때문이다.
	// 따라서 출력되는 주소값도 다르다.
	cout << &something << endl; // copy 되기 전의 주소
	print(something); // copy된 것의 주소

	return 0;
}
