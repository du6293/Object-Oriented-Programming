#include <iostream>
#include "MyConstants.h"

using namespace std;

/*특정 값으로 초기화 해주어야 한다.*/
extern int a = 123;

void doSomething()
{
	cout << "In test.cpp " << Constants::pi << " " << &Constants::pi << endl;
	cout << "Hello " << endl;

}