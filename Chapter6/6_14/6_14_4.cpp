#include <iostream>

/* ���� ����(reference variable) */

using namespace std;


// main�Լ��� �ִ� n���� �ٸ� n�̴�. �� ������ �ּҰ��� �ٸ���.
// main �Լ��� n�� doSomething�Լ��� n���� copy�Ǵ� ��
//void doSomething(int n)

// reference ���� ��ü�� �Ѱ��־��� ������
// main�Լ��� �ִ� n�� ���� n�̴�.
// ���� main�Լ��� n�� doSomething�� n�� ���� �ּҰ��� ���´�.
//void doSomething(int &n)
void doSomething(const int &n) // main�� �ִ� n, doSomething n�� ���� �ּҰ��� ���� �����̰� �� n���� �ٲ� �� ����. 
{
	//n = 10;
	cout << &n << endl;
	cout << "In doSomething  " << n << endl;
}

int main()
{
	int n = 5;
	cout << &n << endl;
	doSomething(n);

	cout << "In main " << n << endl;

	return 0;
}
