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

		/*
			- array 사용 시에는 new - delete를 동일 class 내에 넣어주어야 하지만,
			  vector를 사용하는 경우 vector의 기능 내 delete 기능이 들어있기 때문에
			  굳이 delete를 입력해 주지 않아도 된다.
		
			- [vector가 array보다 동적할당 측면에서 더 유용한 이유]
			  array를 사용해서 동적할당할 때 new - delete 과정이 느리기 때문에 
			  vector를 사용해서 resize(), capacity()를 활용하는 것이 더 빠르다.
			  이미 vector는 자동으로 동적할당 기능이 들어있기 때문
		*/

		cout << "Constructor " << endl;
	}

	int size() 
	{
		return _length;
	}

	// Destructor
	~IntArray() 
	{
		// nullptr을 delete에도 문제가 생기기 때문에 조건을 추가해준다.
		if (_arr != nullptr)
			delete[] _arr;
	}
};

int main()
{
	// Windoe -> Show Diagnostic Tools -> Memory Usage 확인
	// class 내 memory delete를 하므로 delete가 자동으로 호출됨
	// memory leak 방지
	while (true)
	{
		IntArray my_int_arr(10000);
	}

	return 0;
}
