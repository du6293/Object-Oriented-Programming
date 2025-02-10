#include <iostream>

using namespace std;

/*
	scope: 변수를 어디서 사용할 수 있고 어디서 사용할 수 없는지
		  "변수를 본다" 
	duration: 변수를 선언하면 메모리에 공간을 할당하여 변수를 할당하고
			  메모리에서 할당이 해제될 때 까지 지속된다.  
*/
namespace work1
{
	int a = 1;
	void doSomething()
	{
		a += 3;
	}
}

namespace work2
{
	int a = 1;
	void doSomething()
	{
		a += 5;
	}
}

int main()
{
	
	work1::a;
	work1::doSomething();
	
	work2::a;
	work2::doSomething();
	

	return 0;
}
