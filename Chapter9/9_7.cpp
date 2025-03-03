#include <iostream>

using namespace std;

class Accumulator
{
private:
	int m_counter = 0;
public:
	int operator() (int i) { return (m_counter += i); }
};

int main()
{
	Accumulator acc;

	// ()를 overloading했기 때문에
	// 객체 이름에 ()으로 호출 가능
	// 이를 functor라 한다.
	cout << acc(10) << endl;
	cout << acc(20) << endl;

	return 0;
}
