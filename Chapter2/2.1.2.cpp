#include <iostream>
#include <bitset>



int main()
{
	using namespace std;
	
	/* Data Type�� Initialization�ϴ� ��� */
	/* Copy Initialization  */
	int i = 5.123; //5.123�� integer�� ��ȯ�� ���� �޸𸮿� ���� 
	/* Direct Initialization: ()�� ����� initialization */
	int a((int)5.123);	//�ڵ����� 5�� ��ȯ  
	/* Uniform Initialization: {}�� ����� initialization, ��� type�� ������ initialization �� �� �ִ� ���  */
	/* � ������ �ش� ������ ������ �� �ִ� ũ�⺸�� �� ū ũ���� �����͸� ������ ���
	�Ϻ� �������� �ս��� �߻��ϴ� ���� �����Ѵ�. */
	float b{5.123};
	
	cout << i << endl;
	cout << a << endl;
	cout << b << endl; 
	
	/* ����� ������ ó���� ��Ƽ� �����ϱ� ����
	����ϱ� �ٷ� ������ �����ؼ� �޸𸮸� �Ҵ��� ���� ���� �� ����. */
	/* ������ ������ �κа� ������ ����ϴ� �κ��� ������� 
	debugging �ϰų� refactoring �� �� ���ϱ� �����̴�. */
	int k = 0, l(456), m{123};
	
	/* �������� �ʴ� initialization ��� */
	// int k, l, m= 123;
	
	cout << k << endl;
	cout << l << endl;
	cout << m << endl;
	
	  
	
	
	return 0;
} 
