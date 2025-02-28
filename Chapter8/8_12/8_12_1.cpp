#include <iostream>
/* friend 함수와 class 
	연산자 overloading 시 friend를 사용해서 encapsulate를 한다.
*/
using namespace std;

// class B를 전방선언해준다.
class B; 

class A 
{
private:
	int m_value = 1;
	// friend를 통해 prototype 선언해줌
	friend void doSomething(A& a, B& b);
};

class B
{
private:
	int m_value = 2;
	friend void doSomething(A& a, B& b);
};

void doSomething(A& a, B& b)
{
	cout << a.m_value << " " << b.m_value << endl;
}

int main()
{
	A a;
	doSomething(a);

	return 0;
}
