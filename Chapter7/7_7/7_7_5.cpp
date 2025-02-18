#include <iostream>
/* Function Overloading(함수 오버로딩)
	동일한 이름의 함수를 여러 개 사용하는 것 

	함수의 이름이 같더라도 입력으로 주는 parameter가 다르면 다른 함수이다.
	매개변수 타입이 가장 잘 맞는, 주어진 인자와 매개변수의 조합이 좋은 함수를 실행함.
	return type만으로는 구분할 수 없다. 
*/
using namespace std;

void print(unsigned int value) {}
void print(float value) {}

int main()
{
	//print('a'); // ambiguous 문제 발생
	print(0u); // u를 붙여 ambiguous 문제 해결
	print(3.14159f); // f 를 붙여 ambiguous 문제 해결

	return 0;
}
