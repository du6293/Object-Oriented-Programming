#include <iostream>
#include "MyConstants.h"

using namespace std;

/*Ư�� ������ �ʱ�ȭ ���־�� �Ѵ�.*/
extern int a = 123;

void doSomething()
{
	cout << "In test.cpp " << Constants::pi << " " << &Constants::pi << endl;
	cout << "Hello " << endl;

}