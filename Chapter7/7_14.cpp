#include <iostream>
#include <cassert> // assert.h
#include <array>

/* assert(단언하기) 
	디버깅 시 컴파일러의 도움을 받아서 프로그램에 문제가 생기는 것을 미리 차단하는 방법
	run-time에 조건이 false면 프로그램 강제 종료 및 오류 출력
	run-time에 조건이 true면 계속 프로그램 실행
	release 모드에서는 프로그램이 빠르게 돌기 때문에 assert 사용 x

	static assert
	compile time에 결정되는 경우에만 오류를 발생시킴
	assert와 달리 문구를 추가할 수 있다.
*/
using namespace std;

int main()
{
	const int x = 10;
	
	assert(x == 5);

	static_assert(true, "x should be 5");


	return 0;
}
