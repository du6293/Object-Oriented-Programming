#include <iostream>


void doSomething()
{
	/* include �Ǿ� �ִ� ��� ���Ͽ� ����� �� �����Ƿ� �Լ� �ȿ��� namespace���� */
	using namespace std;
#ifdef LIKE_APPLE
	cout << "Apple" << endl;
#else
	cout << "Orange" << endl;
#endif
} 
