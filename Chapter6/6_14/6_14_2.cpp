#include <iostream>

/* ���� ����(reference variable) */

using namespace std;

int main()
{
	int value = 5;
	
	// ���������� ���� �� �ݵ�� �ʱ�ȭ �Ǿ�� �Ѵ�. 
	// �� �� ���ͷ��� �ʱ�ȭ�� �ȵȴ�.
	// ������ �ʱ�ȭ ���־�� �Ѵ�. 
	int& ref = value;
	
	// �� const�� ���� ���������� ���ͷ��� �ʱ�ȭ �����ϴ�.  

	// const�� ����� ���� y�� ���� ���������� ���� �� 
	// ���� ���� ���� const�� �����ؾ� �Ѵ�. 
	const int y = 8;
	const int& ref = y;




	return 0;
}
