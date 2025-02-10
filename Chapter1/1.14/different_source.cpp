#include <iostream>


void doSomething()
{
	/* include 되어 있는 모든 파일에 적용될 수 있으므로 함수 안에다 namespace선언 */
	using namespace std;
#ifdef LIKE_APPLE
	cout << "Apple" << endl;
#else
	cout << "Orange" << endl;
#endif
} 
