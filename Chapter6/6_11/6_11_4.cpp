#include <iostream>

/* Dynamic Memory Allocation(�޸� ���� �Ҵ�)
	- new�� delete
	new delete ������ OS���� �� �� ���� �;� �ϱ� ������ ���� ������.
	���� new delete�� ������ ����ؾ� �Ѵ�.
*/

using namespace std;

int main()
{
	// memory leak
	// loop�� �� ������ ����ؼ� heap memory�� ���ο� memory address�� allocate��
	// �ᱹ memory leak���� out of memory �߻�
	// �۾��������� Memory�� �� �ö�
	// Debug > Windows > Show Diagnostic ToolsŬ�� > Local Windows Debugger Ŭ��
	// Process Memory�� �� �ö󰡴� ���� Ȯ���� �� ����
	while (true)
	{
		int* ptr = new int;
		cout << ptr << endl;
		
		delete ptr; // Process Memory�� �����ϰ� �������� Ȯ���� �� ����
	}

	return 0;
}
