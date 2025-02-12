#include <iostream>
#include <vector>
#include <cstdint> // 고정 너비 정수

/*
	Type aliases (자료형에게 가명(가짜이름) 붙여주기)
	리눅스 프로그래밍 할 때 많이 접한다.
  자료형의 이름이 길 때 짧게 줄일 수 있다.
  가독성을 높인다.
  유지 보수를 편하게 만들어준다. 
  고정 너비 정수에서 platform의 독립적인 코딩을 가능하게 한다.
*/

int main()
{
	using namespace std;
	
	// double == distance_t
	typedef double	distance_t;
	double			my_distance;
	distance_t		home2work;
	distance_t		home2school;


	// 방법 1. vector<pair<string, int>>는 일종의 자료형이다.
	typedef vector<pair<string, int>> pairlist_t;
	pairlist_t pairlist1;
	pairlist_t pairlist2;
	
	
	// 방법 2. compiler에게 가짜 이름을 붙일 자료형의 이름을 알려줌
	using pairlist_t = vector<pair<string, int>>;
	pairlist_t pairlist1;
	pairlist_t pairlist2;
	
	return 0;
}
