#include <iostream>
#include <string>
/* class와 const 
	class 내 함수 중 const를 붙여서 막을 수 있는 함수가 있다면 
	웬만하면 다 const를 붙여두는 게 좋다. 디버깅을 줄일 수 있다.
	const string& getValue() const 처럼 
	member variable도 const로 만들고 return type도 const로 만들어주는 형태를 많이 사용한다. 
	class 내 member function이 const가 된다는 것은 member function 내 
	member variable 값을 바꾸지 않겠다는 뜻이다. 

	reference 보낼 때에도 const 유무에 따라 결과값이 달라진다.
	즉,const의 유무(const, non-const)로 overloading도 수행할 수 있다.

*/
using namespace std;

class Something
{
public:
	string _value = "default";
	
	/* const overloading */
	const string& getValue() const
	{
		cout << "const version " << endl;
		return _value; // const reference 를 return
						// 따라서 값을 바꿔줄 수 없다.
	}

	string& getValue()
	{
		cout << "non-const version " << endl;
		return _value; // non-const reference를 return 
						// 따라서 값을 바꿔줄 수 있다.
	}
};


int main()
{
	// something 자체가 non-const이므로 class 내 string& getValue() 호출
	Something something;
	something.getValue() = 10;

	// something2는 const이므로 class 내 const string& getValue() 호출
	const Something something2;
	something2.getValue();
	//something2.getValue() = 100; // 값 못바꿈

	return 0;
}
