#include <iostream>

using namespace std;

// const �����ͺ��� �� �Լ��� ���������� ��� �����ϴ�. 
const char* getName()
{
	return "Jack Jack";
}


int main()
{
	// const�� �տ� ������ ������ ������ ���ڿ� ���ͷ��� ����ų �� �ִ�.
	//const char *name = "Jack Jack"; // ���ͷ��� ���� �ּҸ� ����Ű�� ������ ����
	//const char *name2 = "Jack Jack";

	const char* name = getName();
	const char* name2 = getName();

	// �����Ϸ��� �� ���ͷ� ������ ������ �����Ƿ� ���� �޸� �ּҸ� ����ϵ��� ��
	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl;


	return 0;
}
