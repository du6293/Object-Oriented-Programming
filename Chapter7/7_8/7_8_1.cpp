#include <iostream>

/* Default Parameters (�Ű������� �⺻��) */
using namespace std;

void print(int x = 1024) // 1024�� default parameter
{
	cout << x << endl;
}

int main()
{
	print(10);
	print(); // default parameter�� �����
	return 0;
}
