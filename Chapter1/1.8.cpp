//���ͷ� (Literal):
//�ǿ�����(Operand):
//����(unary), ����(binary), ����(ternary) 

#include <iostream>


using namespace std;

int main()
{
	int x = 50; // x�� ����, 2�� ���ͷ�, = �� ���Կ����� assignment 
	cout << x + 2 << endl; // + �� �ǿ����� 
	cout << -x << endl;	// ���� ������  
	
	int y = (x > 0) ? 1: 2;	// ���� ������  
	cout << y << endl;  
	cout << "My Home" << endl; // ���ڵ� ���ͷ��̴�. 
	
}
