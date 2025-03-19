#include <iostream>
/* virtual function과 polymorphism */

using namespace std;

class A
{
public:
	void print()
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
	/*
	// B class 객체 b를 A class ref에 바인딩
	A& ref = b; // ref는 b를 가리킴
	ref.print(); // A, ref는 A type이므로 A class의 print() 호출 -> 정적 바인딩  

	A& ref = c;
	ref.print(); // A

	A& ref = d;
	ref.print(); // A
	
	B& ref = d;
	ref.print(); // B
	*/
	C& ref = d;
	ref.print(); // C

	return 0;
}
