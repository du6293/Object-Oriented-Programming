#include <iostream>

namespace a
{
	int my_var(10);
	int my_a(35);
}


namespace b
{
	int my_var(20);
	int my_b(6450);
}

int main()
{
	//using namespace std;
	// 이런 방식도 가능
	using std::endl;
	using std::cout;
	cout << "Hello " << endl;
	/*
		using namespace를 특정 header에서 전역 범위에 넣으면 
		그 header를 include하는 모든 cpp 파일에 영향을 주므로
		전역 범위로 사용하는 것은 조심해야 한다.
	*/
	{
		using namespace a;
		cout << my_var << endl;
		cout << my_a << endl;
	}

	{
		using namespace b;
		cout << my_var << endl;
		cout << my_b << endl;
	}


	return 0;
}
