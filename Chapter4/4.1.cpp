#include <iostream>

using namespace std;

/*
	scope: ������ ��� ����� �� �ְ� ��� ����� �� ������
		  "������ ����" 
	duration: ������ �����ϸ� �޸𸮿� ������ �Ҵ��Ͽ� ������ �Ҵ��ϰ�
			  �޸𸮿��� �Ҵ��� ������ �� ���� ���ӵȴ�.  
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
