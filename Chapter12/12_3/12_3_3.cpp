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
	void print()
	{
		cout << "A" << endl;
	}
	virtual A* getThis() 
	{
		cout << "A::getThis()" << endl;
		return this;
	}
};

class B : public A
{
public:
	void print() 
	{
		cout << "B" << endl;
	}
	// class B는 class A를 상속받기 때문에
	// class A에서 getThis()가 A*임에도
	// class B에서 getThis()가 B*이면 overriding이 가능하다. 
	virtual B* getThis()
	{
		cout << "B::getThis()" << endl;
		return this;
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
	C c;
	
	// class A에서 print() 앞에 virtual이 없으므로 정적바인딩
	A& ref = b; // ref가 b를 가리킴

	// b.getThis()는 B를 return한다. 
	// 따라서 class B의 print()가 실행된다.
	b.getThis()->print(); // B
	
	// class A에서 getThis()는 virtual로 class B의 getThis()로 동적바인딩 됨
	// 따라서 ref.getThis()를 하면 class B의 getThis()가 실행이 된다.
	// 이후 내부적으로 A의 pointer로 바꾼 다음에 class A의 print()가 실행이 된다. 
	ref.getThis()->print(); // A

	cout << typeid(b.getThis()).name() << endl; // class B*
	cout << typeid(ref.getThis()).name() << endl; // class A*

	return 0;
}
