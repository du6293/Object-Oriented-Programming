#include <iostream>
/* 
	가상(함수) 표 (Virtual Tables) 
	다형성을 사용할 땐 상속 구조에 따라 virtual function에 대한
	table을 만들고 사용하게 된다.

	virtual function이 선언되면, copiler는 virtual function의 table을 만든 후
	동적 바인딩을 한다.

	Case 1: 부모 class의 객체 선언 (Base base)
	virtual function이 속한 class(Base)의 객체(base)를 선언해주고
	이 객체가 class의 virtual method를 호출하면
	정적바인딩으로 직접 호출하는 게 아니라 
	해당 class의 vitrual function pointer(*_vptr)를 사용해
	virtual function table(Base VTable)로 가서 해당 virtual function과 type이 같은 function pointer(fun1())를 찾고
	그리고 그 function pointer가 가리키는 class method(virtual fun1())를 해당 class로 찾아가서 실행함
	따라서 Base class -> virtual function table -> Base class 자기 자신을 돌아서 오는 구조

	Case 2: 자식 class의 객체 선언 (Derived derived)
	자식 class 역시 virtual table에 대한 vitrual function pointer(*_vptr)를 가짐
	이때 virtual function pointer는 상속한 부모 class의 virtual function pointer와 같다.
	부모 class로부터 overriding된 function(func1)이 있다면 해당 virtual function과 type이 같은 function pointer(fun1())를 찾고
	그리고 그 function pointer가 가리키는 class method(virtual fun1())를 해당 자식 class로 찾아가서 실행함.
	따라서 Derived class -> virtual function table -> Derived class 자기 자신을 돌아서 오는 구조
	부모 class로부터 overrinding 되지 않은 부모 class의 function(func2)를 호출해야 한다면 바로 부모 class의 func2를 호출함

	자식 class로부터 생성된 객체를 부모 class의 pointer나 reference로 집어넣어도 
	virtual table은 동일하기 때문에 다형성을 활용해 호출할 수 있다. 

*/
using namespace std;

class Base
{
public:
	//Function Pointer *_vptr;
	virtual void fun1() {};
	virtual void fun2() {};
};

class Der : public Base
{
public:
	//FunctionPointer *_vptr;
	virtual void fun1() {};
	// void fun3() {};
};

int main()
{


	return 0;
}
