#include <iostream>
/* 
	가상(함수) 표 (Virtual Tables) 
*/
using namespace std;

class Base
{
public:
	//Function Pointer *_vptr;
	void fun1() {};
	void fun2() {};
};

class Der : public Base
{
public:
	//FunctionPointer *_vptr;
	void fun1() {};
	void fun3() {};
};

int main()
{
	cout << sizeof(Base) << endl; // 1 byte
	cout << sizeof(Der) << endl; // 1 byte

	return 0;
}
