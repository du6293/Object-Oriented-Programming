#include <iostream>

/*
	Destuctor(소멸자) : 변수가 영역을 벗어나 사라질 때 호출이 되는 함수
	Constructor(생성자) : class가 생성될 때 호출이 되는 함수

	destructor는 instance가 memory에서 해제될 때 내부에서 자동으로 호출된다.
	동적할당으로 만들어진 경우에는 영역을 벗어나도 자동으로 memory가 해제되지 않기 때문에 
	delete로 memory를 해제할 때에만 destructor가 호출된다.
	destructor를 프로그래머가 직접 호출하는 것은 대부분의 경우 권장하지 않는다.
*/

using namespace std;

class IntArray
{
private:
	int*	_arr	=	nullptr;
	int		_length	=	0;
	
public:
	// Constructor
	IntArray(const int length_in)
	{
		_length = length_in;
		_arr = new int[_length]; // 객체 생성하면서 array 동적 할당해줌

		cout << "Constructor " << endl;
	}

	int size() 
	{
		return _length;
	}
};

int main()
{
	// Windoe -> Show Diagnostic Tools -> Memory Usage 확인
	// memory가 memory leak 발생 
	while (true)
	{
		IntArray my_int_arr(10000);
	}

	return 0;
}
