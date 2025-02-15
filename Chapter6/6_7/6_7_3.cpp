#include <iostream>
#include <cstddef>

using namespace std;
/*
 �Ķ���ͷ� �Ѿ���� ������ ���⼭ �ٽ� ������ �ǰ� 
 argument�� ���� ������ ����ִ� ���� ���簡 �Ǵ� ��
 ���� main�Լ��� ptr ������(�������ּ�) doSomething�Լ��� ptr������ �����. 
 doSomething �Լ��� ptr ������ �ּҿ� main �Լ��� ptr ������ �ּҰ� �ٸ���.
 �� ptr ������ ������ ����.

 �Լ��� ȣ��� �� stack frame�� ������.
 �Լ� ���ο��� ���Ǵ� �Ķ���ʹ� stack�� ������ �����ȴ�.
 ���� �� ������ �ּҰ� �ٸ� ������ ���� ������ �����ϴ� �� �ƴ϶�
 �Լ� ȣ�� �� ���ο� �������� ptr�� ������ ���̴�.
 */
void doSomething(double *ptr)
{
	if (ptr != nullptr)
	{
		// do something useful
		cout << *ptr << endl;
	}
	else
	{
		// do nothing with ptr
		cout << "Null ptr, do nothing" << endl;
	}
	cout << "address of pointer variable in doSomething() " << &ptr << endl;
}


int main()
{
	//double *ptr = NULL; // C-style
	//double *ptr = 0; // C-style
	double* ptr{ nullptr }; // modern c++
	double d = 123.4;

	doSomething(ptr);
	doSomething(nullptr);

	doSomething(&d);

	ptr = &d;
	doSomething(ptr);

	// ���⿣ nullptr�� ���� �� �ִ�.
	// ���� nullptr�� �޾ƾ� �ϴ� �Ķ���Ͱ� ���� �� ����Ѵ�. 
	std::nullptr_t nptr;

	cout << "address of pointer variable in main() " << &ptr << endl;

	return 0;
}
