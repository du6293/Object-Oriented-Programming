#include <iostream>

/* �����Ϳ� const */
using namespace std;

int main()
{
	/* Case 3. */
	int value = 5;
	int* const ptr = &value; // ����Ű�� �ּҰ��� �ִ� ���� �ٲ� �� ����
							 // �ٸ� �ּҰ��� �ִ� ������ ����ų �� ����
	
	*ptr = 10;
	cout << *ptr << endl;

	//int value2 = 8;
	//ptr = &value2; // �ٸ� �ּҰ��� �ִ� ������ ����Ų �� ����

	/* Case 4. */
	int value3 = 5;
	const int* const ptr = &value3; // �� �� ������ ��ü�� ����̹Ƿ� ������ �ʱ�ȭ ���־�� �Ѵ�. 

	//*ptr = 10;// �ٸ� �ּҰ��� �ִ� ������ ����ų �� ����
	//ptr = &value;// ���� �ּҰ��� �ִ� ������ �ٸ� ���������� �ٲ� �� ����

	return 0;
}
