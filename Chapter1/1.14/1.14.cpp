#include <iostream>
#include <algorithm>
using namespace std;

/* MACRO - �빮�ڷ� ��. �ڵ忡�� ������ �ش� ����� ��ü�ϴ� ���� */
#define MY_NUMBER 3333333333 
#define MY_STR "Hello, World" 
#define MAX(a,b) ((a>b) ? a : b)
#define LIKE_APPLE 

void doSomething()
{
	#ifdef LIKE_APPLE
	cout << "Apple" << endl;
	#else
	cout << "Orange" << endl;
	#endif
} 

int main()
{
	cout << MY_NUMBER << endl;
	cout << MY_STR << endl;
	cout << MAX(45, 90) << endl;
	
	/*std::max�� algorithm ���̺귯���� ����*/
	cout << std::max(1+3,2) << endl;
	
///* ��ó����: build ���� ���� ������ */
///* LIKE_APPLE�� ����Ǿ� �ִٸ� */
///* ���� �ڵ� ��ܿ� ����Ǿ� �����Ƿ� */
//#ifdef LIKE_APPLE
//	cout << "Apple" << endl;
//#endif
//
///* LIKE_APPLE�� ����Ǿ� ���� �ʴٸ� */
//#ifndef LIKE_APPLE
//	cout << "Orange" << endl;
//#endif
	
	return 0; 
	
}
