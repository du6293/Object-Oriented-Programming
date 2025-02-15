#include <iostream>

/* Dynamic Memory Allocation(메모리 동적 할당)
	- new와 delete
*/

using namespace std;

int main()
{
	int* ptr = new (std::nothrow) int{7}; // 4byte만큼 os에 메모리 받아옴
	int* ptr2 = ptr;

	delete ptr;
	ptr = nullptr;
	//ptr2 = nullptr;

	// ptr을 delete해주었고, ptr2는 delete를 하지 않았기 때문에
	// 이 이후로*ptr2를 하면 오류 발생
	//*ptr2;

	return 0;
}
