#include <iostream>

/* Dynamic Memory Allocation(�޸� ���� �Ҵ�)
	- new�� delete
*/

using namespace std;

int main()
{
	int* ptr = new (std::nothrow) int{7}; // 4byte��ŭ os�� �޸� �޾ƿ�
	int* ptr2 = ptr;

	delete ptr;
	ptr = nullptr;
	//ptr2 = nullptr;

	// ptr�� delete���־���, ptr2�� delete�� ���� �ʾұ� ������
	// �� ���ķ�*ptr2�� �ϸ� ���� �߻�
	//*ptr2;

	return 0;
}
