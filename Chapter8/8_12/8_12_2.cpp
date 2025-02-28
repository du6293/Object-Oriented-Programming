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
	friend class B;
};

class B
{
private:
	int m_value = 2;
public:
	void doSomething(A& a)
	{
		cout << a.m_value << endl;
	}
};



int main()
{
	A a;
	B b;
	b.doSomething(a);

	return 0;
}
