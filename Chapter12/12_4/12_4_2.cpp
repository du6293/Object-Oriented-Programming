#include <iostream>
/* 가상 소멸자
	상속구조에서 생성자는 자식 class의 자신의 생성자를 사용했음
	소멸자는 가상소멸자를 사용하는 것이 좋다.
*/

using namespace std;

class Base 
{
public:
	~Base()
	{
		cout << "~Base()" << endl;
	}
};

class Derived : public Base
{
private:
	int* m_array; // dynamic memory allocation
public:
	Derived(int length)
	{
		m_array = new int[length];
	}

	~Derived()
	{
		cout << "~Derived()" << endl;
		delete[] m_array;
	}
};


int main()
{
	// 다형성을 활용
	// 보통 부모 class는 1개이고 이를 상속받는 자식 class는 여러개 이다.
	// 따라서 자식 class의 pointer를 부모 class의 pointer에 대입해 사용한다.

	// 자식 class의 pointer를 동적할당
	Derived* derived = new Derived(5);
	// 자식 class의 pointer를 부모 class의 pointer로 넘겨줌
	Base* base = derived;
	//부모 class의 pointer를 지움
	delete base; // ~Base()만 호출됨. 자식 class의 pointer delete되지 않음 

	return 0;
}
