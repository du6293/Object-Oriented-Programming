#include <iostream>
/* friend 함수와 class 
	연산자 overloading 시 friend를 사용해서 encapsulate를 한다.
*/
using namespace std;

// class A를 전방선언해준다.
class A; 

class B
{
private:
	int m_value = 2;
public:
	// class A가 존재한다는 걸 알 수 있음
	void doSomething(A& a);

};

class A 
{
private:
	int m_value = 1;
	// class B의 member 함수로 doSomething 함수가 존재한다는 걸 알 수 있음
	friend void B::doSomething(A& a);
};

// class B의 doSomething member함수를 외부에서 정의 
void B::doSomething(A& a)
{
	cout << a.m_value << endl;
}


int main()
{
	A a;
	B b;
	b.doSomething(a);

	return 0;
}
