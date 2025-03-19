#include <iostream>
/* virtual function과 polymorphism 
	virtual: 부모 class에서 child class로 상속할 때 
	child class에 동일한 이름의 함수가 overriding 되어 있는 상황에서
	부모 class의 함수에 virtual을 붙이면 child class의 함수가 실행된다. 

	compiler는 virtual을 만나면 virtual table을 생성한다.
	virtual pointer을 통해 해당 class의 vtable을 가리킨다. 
*/

using namespace std;

// 가장 상위 class overriding 함수가 virtual이 되면 
// 그 하위 class overriding 함수도 virtual 처럼 동작한다.
// 이 때 run-time에 어떤 함수가 호출될 지 결정된다. (동적 바인딩) 
class A
{
public:
	virtual void print()
	{
		cout << "A" << endl;
	}
};

class B : public A
{
public:
	void print()
	{
		cout << "B" << endl;
	}
};

class C :public B
{
public:
	void print()
	{
		cout << "C" << endl;
	}
};

class D : public C
{
public:
	void print()
	{
		cout << "D" << endl;
	}
};

int main()
{
	A a;
	a.print(); // A

	B b;
	b.print(); // B

	C c;
	c.print(); // C

	D d;
	d.print(); // D
	
	// B class 객체 b를 A class ref에 바인딩
	A& ref = b; // ref는 b를 가리킴
	ref.print(); // B, ref는 A type이지만 B class의 print() 호출
	
	B& ref = c;
	ref.print(); // C
	
	return 0;
}
