#include <iostream>

using namespace std;

namespace MySpace1
{	
	/* namespace �ȿ� namespace�� �� ������ �� ���� */
	namespace InnerSpace
	{
		int my_function()
		{	
			printf("MySpace1 > InnerSpace > Call my_function");
			return 0;
		}
	}
	int doSomething(int a, int b)
	{
		return a + b;
	}
}

namespace MySpace2
{
	int doSomething(int a, int b)
	{
		return a * b;
	}
}

int main()
{
	/* MySpace1�� :: ���� ����ϰ� �ʹٸ� */
	using namespace MySpace1;
	cout << doSomething(3,4) << endl;
	
	/* MySpace1::InnerSpace�� :: ���� ����ϰ� �ʹٸ� */
	using namespace MySpace1::InnerSpace;
	my_function();
	
//	cout << MySpace1::doSomething(30, 40) << endl;
//	cout << MySpace2::doSomething(30, 40) << endl;
	
	return 0; 	
}


