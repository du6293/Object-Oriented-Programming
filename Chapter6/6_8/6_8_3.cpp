#include <iostream>
/* �����Ϳ� ���� �迭*/
using namespace std;


/*
	array�� structure�� class �ȿ� ���� ��쿡��
	�����ͷ� ������ȯ�� ���� �ʴ´�. 
	array ��ü�� ���޵ȴ�. 
*/

struct MyStruct
{
	int array[5] = { 9,7,5,3,1 };

};

// doSomething ������ ���ο� ms ������ �����ǰ� ���� ms �����͸� �״�� ����. 
void doSomething(MyStruct ms)	// ����ü�� ������ ���� 
{	
	cout << sizeof(ms.array) << endl; // ����� ����ü�� ũ�� ��ȯ 
}

int main()
{
	MyStruct ms;

	cout << ms.array[0] << endl;	// 9
	cout << sizeof(ms.array) << endl;	// 20
	doSomething(ms);	// 20


	return 0;
}
