#include <iostream>

/* �����Ϳ� const */

/*
	case1) const int value = 5; -> �������� �ٲ� �� ����
	case2) const int *ptr = &value; -> ptr�� ����Ű�� �ּҰ��� �ִ� ������ �ٲ� ���� ������
								ptr�� �ٸ� �ּҰ��� �ִ� ������ ����ų ���� ����
	case3) int* const ptr = &value -> ptr�� ����Ű�� �ּҰ��� �ִ� ������ �ٲ� ���� ������
								ptr�� �ٸ� �ּҰ��� �ִ� ������ ����ų ���� ����
	case4) const int* const ptr = &value -> ptr�� ����Ű�� �ּҰ��� �ִ� ������ �ٲ� �� ����
									ptr�� �ٸ� �ּҰ��� �ִ� ������ ����ų ���� ���� 
*/

using namespace std;

int main()
{
	//const int value = 5; // ������ ���� �ٲ��� �ʰڴٴ� ��
	//const int* ptr = &value; // ptr�� ����Ű�� �ִ� �ּҿ� ����ִ� ���� �ٲ��� �ʰڴٴ� ��
							 // �ٸ� �ּҰ��� �ִ� ������ �ٲܼ��� ����
	
	/* Case 1. */					
	// value ������ const�� �پ��� ������ 
	// de-referencing���� ���� �ٲ� �� ����
	// *ptr = 6;

	/* Case 2. */
	int value1 = 5;
	const int* ptr = &value1;
	cout << "Hello " << endl;
	cout << *ptr << endl;
	
	int value2 = 6;
	ptr = &value2;
	cout << *ptr << endl; // *ptr���� �ٸ� �ּҿ� �ִ� ���� 6���� �����
	//*ptr = 8; // ������ �ּҰ��� �ִ� ���� ���ٲ�

	return 0;
}
