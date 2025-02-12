#include <iostream>
#include "MyConstants.h"

/*
	-Global Variable: ������ ������� �ʴ� �� ����
	-Static Variable: �޸𸮰� �������� ���� �ּҿ� �Ҵ�Ǵ� ����, �ʱ�ȭ�� 1���� �Ͼ
				�ش� ������ OS�κ��� ���� ������ �޸� ũ��� static�ϴ�.
				���α׷� ���۵� �� �޸𸮿� �Ҵ�ǰ� ���α׷��� ����� �� ����
	��� �ȿ� ������ �������� ���ѵǾ� �ִ� ��� linkage�� ����.
	local variable�� Ư�� ���� �������� ���Ǳ� ������ �ٸ� ���Ͽ����� �� �� ����. 
	���� local variable�� linkage�� ����.
	linking �ܰ迡�� local variable�� �ٸ� ���Ͽ� �ִ� variable�� linking�� �� �ʿ䰡 ����.
	-Internal Linkage: ������ �����ߴµ� ���� �������� ��𼭵� ����� �� �ִ� ���
	���� C++ ���� �������� global �ϰ� �����ϴ� ������ �ǹ�
	-External Linkage: �� c++ ���Ͽ��� ������ ������ �ٸ� c++���Ͽ����� ��� ������ ���
	�ܺ� ���Ͽ� ����Ǿ� �ִ� �Լ��� extern���� �����Ͽ� ����� �� �ִ�.
	global ������ �ٸ� ���Ͽ����� ����� �� �ִ�. 
*/


using namespace std;

/* Forward Declaration */
/* ��� �ܺο� �Լ��� ����Ǿ� �ִ�. */
extern void doSomething();
extern int a;//  �̹� test.cpp�� �ʱ�ȭ �ȴ�.

/*
	int g_x;		external linkage
	static int g_x; internal linkage
	const int g_x;	X

	extern int g_z; 
	extern const int g_z;

	int g_y = 1;
	static int g_y = 1;
	const int g_y = 1;

	extern int g_w = 1;
	extern const int g_w = 1;

*/

int main()
{

	doSomething();
	cout << a << endl;
	/* test.cpp�� ������ 4.2cpp �� ������ �޸� �ּҰ� ������ ���� Ȯ���� �� �ִ�. */
	cout << "In main.cpp file "  << Constants::pi << " " << &Constants::pi << endl;
	doSomething();
	return 0;

}