// ����(declaration)
// ����(definition) 


// �����Ϸ��� ������ �Ʒ��� ���������� �д´�.
// ���� �Լ��� main �Ʒ��� ��ġ�ϸ� ���� �߻� 

// �ƴϸ� �Լ��� main ���� �ø��� > forward declaration
#include <iostream>

 
using namespace std;

//int add(int a, int b)
//{
//	return a + b;
//}

/* forward declaration */ 
int add(int a, int b);
int mul(int a, int b);
int sub(int a, int b);


int main()
{
	cout << add(1,2) << endl;
	cout << mul(1,2) << endl;
	cout << sub(1,2) << endl;
	
	
	return 0; 
	
}

/* main ���� ��ġ�ؾ� �Ѵ�. �ƴϸ� forward declaration �ϱ�*/
int add(int a, int b)
{
	return a + b;
}
/* definition */
int mul(int a, int b)
{
	return a * b;
}

int sub(int a, int b)
{
	return a - b;
}

