#include <iostream>
/* Constructor (생성자) 
	- instance가 construct 될 때 자동으로 호출되는 함수이다.
	- constructor가 없으면 instance 선언을 하지 못하기 때문에
	  class 내 별도로 constructor를 선언되어 있지 않아도 compiler가
	  자동으로 default constructor를 만들어준다.
	- constructor 함수에 파라미터가 아무것도 없는 
	  default constructor인 경우에는 ()를 빼야 함
	- constructor 함수에 파라미터가 있다면 
	  fir처럼 괄호를 빼서 선언하면 오류 발생
	- uniform initialization은 main 문에서 class를 선언할 때
	  private 영역에 있는 변수들의 type 변환을 허용하지 않는다.
	- direct initialization은 main 문에서 class를 선언할 때
	  private 영역에 있는 변수들의 type 변환을 허용한다.

*/
using namespace std;

class Second
{
public:
	// Constructor
	Second()
	{
		cout << "Class Second constructor() " << endl;
	}
};


class First
{
	// class 내부에 class 존재
	Second sec; // Second class를 First class의 멤버이다.
public:
	First()
	{
		cout << "Class First constructor() " << endl;
	}
};

int main()
{	
	First fir; // second가 먼저 생성되고 그 다음 first 가 생성됨

	return 0;
}
