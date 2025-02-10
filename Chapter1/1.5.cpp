// 함수(function): 
// 리턴값(return values):
// 매개변수(parameters):
// 인수(arguments):  
// 변수명은 길더라도 자세하게 짓는게 좋다.  
// OS는 main이라는 함수를 가장 먼저 찾음  
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
