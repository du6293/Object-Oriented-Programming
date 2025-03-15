#include <iostream>
/*  Derived 된 class들의 생성 순서 

	Mother class의 constructor 호출 
	-> Mother class의 member variable (public or protected) initialization
	-> Child class의 constructor 호출
	-> Child class의 member variable (public or protected) initialization
*/
using namespace std;


// 상속이 여러번 이루어지는 경우 
// A -> B -> C 로 상속
class A
{
public:
	A()
	{
		cout << "A constructor " << endl;
	}

};

class B : public A
{
public:
	B()
	{
		cout << "B constructor " << endl;
	}
};

class C : public B
{
public:
	C()
	{
		cout << "C constructor " << endl;
	}
};


int main()
{
	C c; // constructor 호출 순서: A -> B -> C
	cout << endl;

	B b; // constructor 호출 순서: A -> B
	cout << endl;

	A a; // constructor 호출 순서: A

	return 0;
}
