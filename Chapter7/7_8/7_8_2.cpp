#include <iostream>

/* Default Parameters (�Ű������� �⺻��) */
using namespace std;

// go to header file -> default parameter Ȯ�� 
void print(int x = 10, int y = 20, int z = 30);

// header file�� ���ǰ� �Ǿ� �ֱ� ������ default ���� �ָ� �ȵ�
void print(int x, int y, int z) 
{
	cout << x << " " << y << " " << z << endl;
}

int main()
{
	print();
	print(100); // x�� ���� ��
	print(100, 200); // x, y�� ���� �� 
	print(100, 200, 300); // x, y, z�� ���� �� 
	
	return 0;
}
