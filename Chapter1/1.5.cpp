// �Լ�(function): 
// ���ϰ�(return values):
// �Ű�����(parameters):
// �μ�(arguments):  
// �������� ����� �ڼ��ϰ� ���°� ����.  
// OS�� main�̶�� �Լ��� ���� ���� ã��  
#include <iostream>

using namespace std;

/* add function */
int addTwoNumbers(int num_a, int num_b)
{
	int sum = num_a + num_b;
	
	return sum;
}

/* multiply function */
int mulTwoNumbers(int num_a, int num_b)
{
	int sum = num_a * num_b;
	
	return sum;
}

/* ptint hello world function */
void printHelloWorld()
{
	cout << "Hello World " << endl;
	return;
}

int main(){
	
	cout << addTwoNumbers(1,2) << endl;
	cout << addTwoNumbers(3,4) << endl;
	cout << addTwoNumbers(8,13) << endl;
	cout << "" << endl;
	cout << mulTwoNumbers(1,2) << endl;
	cout << mulTwoNumbers(3,4) << endl;
	cout << mulTwoNumbers(8,13) << endl;
	
	printHelloWorld();
	
	return 0;
}
