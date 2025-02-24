#include <iostream>

/* this 포인터와 연쇄 호출(Chaining Member Functions) 
	this는 객체 자신의 포인터로, 자기 자신의 주소를 출력하게 해줌
	즉 this는 현재 해당 주소를 갖고 있는 인스턴스를 의미함
*/

using namespace std;

class Simple
{
private:
	int _id;

public:
	Simple(int id)
	{
		// 현재 포인터가 가리키는 instance에 setID를 호출
		this -> setID(id);
		//(*this).setID(id);
		
		// 현재 포인터가 가리키는 instance의 _id변수르 설정
		this->_id;

		// 현재 instance의 주소 출력할 때 this 사용
		cout << this << endl;
	}

	// setID 함수는 class 내 모든 instance가 공유하는 함수이다
	void setID(int id)
	{
		_id = id;
	}
	int getID()
	{
		return _id;
	}
};

int main()
{
	// 각 instance는 각자 this 포인터를 갖고 있다.
	Simple s1(1), s2(2);
	
	// s1과 s2가 구분되어야 한다.
	s1.setID(2);
	s2.setID(4);
	
	cout << &s1 << " " << &s2 << endl;

	// this 포인터를 외부로 강제로 꺼내서 사용할 때도 있다.
	// Simple::setID(&s2, 4); 
	// s2.setID(4);

	return 0;
}
