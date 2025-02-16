#include <iostream>

/* reference(����)�� const*/
using namespace std;

void doSomething(const int x)
{
	cout << x << endl;
}

int main()
{
	const int x = 5;	// x�� ���� ������
	//const int &ref_x = x; // ref_x�� ���� ������

	// const�� ���� reference ������ ���ͷ��� �ʱ�ȭ �����ϴ�.
	const int &ref_x = 3 + 4;
	const int &ref_2 = ref_x; // ref_2�� ���� ������

	cout << ref_x << endl;
	cout << &ref_x << endl;

	return 0;
}
