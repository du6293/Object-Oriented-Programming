#include <iostream>
#include <cmath>
/* ������ ���� �μ� ���� (Call by Reference) */

using namespace std;

// const�� �ٿ��ָ� main���� �Լ��� �Է� �Ķ���͸� ���ͷ��� �־ �ȴ�. 
void foo(const int& x)
{
	cout << x << endl;
}

int main()
{
	foo(6); // �ٷ� ���ͷ��� reference �Է��� �ְ� �Ǹ� ���� �߻�	
			// �Ķ���Ϳ� const�� �ٿ��־�� �Ѵ�.

	return 0;
}
