#include <iostream>

/*
	Destuctor(소멸자) : 변수가 영역을 벗어나 사라질 때 호출이 되는 함수
	Constructor(생성자) : class가 생성될 때 호출이 되는 함수

	destructor는 instance가 memory에서 해제될 때 내부에서 자동으로 호출된다.
	동적할당으로 만들어진 경우에는 영역을 벗어나도 자동으로 memory가 해제되지 않기 때문에 
	delete로 memory를 해제할 때에만 destructor가 호출된다.
	destructor를 프로그래머가 직접 호출하는 것은 대부분의 경우 권장하지 않는다.
*/

using namespace std;

class Simple
{
private:
	int _id;

public:
	Simple(const int& id_in)
		: _id(id_in)
	{
		cout << "Constructor " << _id << endl;
	}

	// Destructor
	~Simple()
	{
		cout << "Destructor " << _id << endl;
	}
};

int main()
{
	// Constructor가 실행되고 나서 Destructor가 실행된다.
	//Simple s1(0);

	// 동적할당도 가능하다. 
	Simple* s1 = new Simple(0);

	Simple s2(1);

	// delete되면서 destructor가 자동으로 호출된다.
	delete s1;

	return 0;
}
