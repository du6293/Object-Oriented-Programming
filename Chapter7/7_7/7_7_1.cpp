#include <iostream>
/* Function Overloading(함수 오버로딩)
	동일한 이름의 함수를 여러 개 사용하는 것 

	함수의 이름이 같더라도 입력으로 주는 parameter가 다르면 다른 함수이다.
	매개변수 타입이 가장 잘 맞는, 주어진 인자와 매개변수의 조합이 좋은 함수를 실행함.
	return type만으로는 구분할 수 없다. 
*/
using namespace std;

int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}


int main()
{
	add(1, 2); // int add를 쓸 지 double add를 쓸 지는 compile time에 결정되어야 한다.
	add(3.0, 4.0);

	return 0;
}
