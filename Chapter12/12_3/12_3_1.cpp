#include <iostream>
/* override, final, covariant return type 
	부모 class에서 child class로 상속을 할 때
	함수명은 동일하지만 parameter 가 다른 경우 overriding 불가능 하다.

	overriding: 상속 관계에서 부모 클래스의 함수를 자식 클래스가 재정의하는 것
				함수명, 매개변수, 반환형 완전히 동일
				런타임에서 어떤 함수가 호출될 지 결정하므로 동적 바인딩
	overloading: 같은 클래스 내에서 같은 이름의 함수를 매개변수만 다르게 여러 개 정의하는 것
				컴파일 시점에 어떤 함수가 호출될 지 결정하므로 정적 바인딩이다.
	*/
using namespace std;

class A
{
public:
	virtual void print() const
	{
		cout << "A" << endl;
	}
};

class B : public A
{
public:

	// class A에서 상속 된 함수가 class B에도 선언되어 있는 경우 
	// 함수 명 옆에 override를 명시해서 override되었다고 밝혀도 된다.
	void print() const override
	{
		cout << "B" << endl;
	}
};

class C : public B
{
public:
	virtual void print()
	{
		cout << "C" << endl;
	}
};

int main()
{
	A a;
	B b;
	
	A& ref = b;
	ref.print(); // A

	return 0;
}
