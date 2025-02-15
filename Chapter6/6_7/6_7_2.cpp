#include <iostream>
#include <typeinfo>

using namespace std;

struct Something	// 4 * 4 = 16 bytes
{
	int a, b, c, d;
};

int main()
{
	int x = 5;
	double d = 1.0;

	// ���� �����ͳ� ������������ ��� Ư�� type ���� ����
	// typedef int* int;
	
	// ������ ����
	// �ʱ�ȭ�� ���ִ� ���� ����. 
	// x�� �ּҰ� ptr_x�� ����.
	int *ptr_x = &x; // ������ ������ ���� x�� ����
	double* ptr_d = &d; // ������ ������ ���� y�� ����
	Something ss;
	Something* ptr_s;

	cout << ptr_x << endl; // x�� �ּ�
	cout << *ptr_x << endl;// x������
	cout << typeid(ptr_x).name() << endl;
	cout << sizeof(x) << endl;
	// x86 ���� ������ ������ type�� ������� 4bytes �̴�.
	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
	cout << endl;
	
	cout << ptr_d << endl;
	cout << *ptr_d << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;
	cout << endl;

	cout << sizeof(Something) << endl; // 16 bytes
	cout << sizeof(ptr_s) << endl; // ������ ������ ũ��: 4 bytes
	
	return 0;
}
