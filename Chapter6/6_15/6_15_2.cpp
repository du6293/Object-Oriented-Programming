#include <iostream>

/* reference(����)�� const*/
using namespace std;

// reference�� �Ѱ������ϱ� ���� ���簡 �� �Ͼ��.
void doSomething(const int &x)
{
	cout << x << endl;
}

int main()
{
	int a = 1;

	doSomething(a);

	// doSomething �Լ��� �Ķ���Ϳ� const�� �پ��� ������ 
	// ����� �ٷ� �Ķ���ͷ� �־ �ȴ�. 
	doSomething(1);	
	doSomething(a + 3);
	doSomething(3 * 4);

	return 0;
}
