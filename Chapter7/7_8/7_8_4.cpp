#include <iostream>
#include <string>
/* Default Parameters (�Ű������� �⺻��) 
	default parameter���� �Լ� overloading�� ������ �ش�.
*/
using namespace std;

void print(int x)
{

}

void print(int x, int y = 10)
{

}

int main()
{
	print(10); // ambiguous ���� �߻�
	
	return 0;
}
