#include <iostream>

/* Dynamic Memory Allocation(메모리 동적 할당)
	- new와 delete
	new delete 과정은 OS에게 한 번 갔다 와야 하기 때문에 조금 느리다.
	따라서 new delete를 적당히 사용해야 한다.
*/

using namespace std;

int main()
{
	// memory leak
	// loop가 돌 때마다 계속해서 heap memory에 새로운 memory address를 allocate함
	// 결국 memory leak으로 out of memory 발생
	// 작업관리자의 Memory가 쭉 올라감
	// Debug > Windows > Show Diagnostic Tools클릭 > Local Windows Debugger 클릭
	// Process Memory가 쭉 올라가는 것을 확인할 수 있음
	while (true)
	{
		int* ptr = new int;
		cout << ptr << endl;
		
		delete ptr; // Process Memory가 일정하게 유지됨을 확인할 수 있음
	}

	return 0;
}
