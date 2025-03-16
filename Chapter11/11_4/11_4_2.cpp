#include <iostream>
/* derivede된 class들의 생성과 초기화 */
using namespace std;

class A
{
public:
	A(int a)
	{
		cout << "A: " << a << endl;
	}
	~A()
	{
		cout << "Destructor A " << endl;
	}
};

class B : public A
{
public:
	B(int a, double b)
		: A(a)
	{
		cout << "B: " << b << endl;
	}
	~B()
	{
		cout << "Destructor B " << endl;
	}

};

class C : public B
{
public:
	C(int a, double b, char c)
		: B(a, b)
	{
		cout << "C: " << c << endl;
	}
	~C()
	{
		cout << "Destructor C " << endl;
	}
};

int main()
{
	// 생성 순서: A -> B -> C
	// 소멸 순서: C -> B -> A
	C c(1024, 3.14, 'a');

	
	return 0;
}
