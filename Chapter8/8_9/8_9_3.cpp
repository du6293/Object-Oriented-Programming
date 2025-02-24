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
// const를 붙여주었기 때문에 
// copy를 하지 않고
// main문에서 호출할 때 사용되는 파라미터와
// 동일한 주소의 class instance가 전달된다.
void print(const Something &st)
{

	cout << &st << endl;
	cout << st.getValue() << endl;
}

int main()
{
	Something something;
	
	// 아래 두 줄이 코드를 실행하면
	// constructor는 1번 실행된다.
	// print함수에 동일한 주소의 instance가 전달되므로
	// 출력되는 주소값은 동일하다.
	cout << &something << endl;
	print(something); 

	return 0;
}
