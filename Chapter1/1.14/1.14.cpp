#include <iostream>
#include <algorithm>
using namespace std;

/* MACRO - 대문자로 씀. 코드에서 만나면 해당 상수로 교체하는 역할 */
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
	
	/*std::max는 algorithm 라이브러리에 있음*/
	cout << std::max(1+3,2) << endl;
	
///* 전처리기: build 들어가기 전에 결정함 */
///* LIKE_APPLE이 선언되어 있다면 */
///* 현재 코드 상단에 선언되어 있으므로 */
//#ifdef LIKE_APPLE
//	cout << "Apple" << endl;
//#endif
//
///* LIKE_APPLE이 선언되어 있지 않다면 */
//#ifndef LIKE_APPLE
//	cout << "Orange" << endl;
//#endif
	
	return 0; 
	
}
