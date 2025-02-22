#include <iostream>

/* Constructor의 member initializer list (멤버 초기화 리스트) */

using namespace std;

class B
{
private:
	int		_b;

public:
	B(const int& _b_in)
		:_b(_b_in)
	{

	}

};


// class member 안에 다른 user-defined type으로 정의된 class member가 들어가는 경우
class Something
{
private:
	int		_i = 100;
	double	_d = 100.0;
	char	_c = 'F';
	int		_arr[5] = {100, 200, 300, 400, 500};
	B		_b{1024};		// class B의 member 변수가 class Something에 들어감

public:	
	// Constructor
	Something()
		//	: _i(1), _d(3.14), _c('a') // member initializer list
		// uniform initialization도 가능, 단 형변환 불가
		: _i{ 1 }
		// member variable의 변경이 빈번할 땐 , (member variable) 형태가 좋다
		, _d{ 3.14 }
		, _c{ 'a' }
		, _arr{ 1,2,3,4,5 }
		, _b{ _i - 1 }
	{
		
		_i *= 2;
		_d *= 3.0;
		_c += 3;
		_arr[0] = 5;
		_arr[1] = 10;
		_arr[2] = 15;
		_arr[3] = 20;
		_arr[4] = 25;
	}
	
	void print()
	{
		cout << _i << " " << _d << " " << _c << endl;
		for (auto& e : _arr)
			cout << e << " ";
		cout << endl;
	}
};

int main()
{
	Something some;
	// 클래스 내 private 영역과 생성자 멤버 초기화 영역에서 모두 member variable을 초기화 하고 있다면
	// 이 경우 생성자 멤버 초기화 영역에서 초기화 한 내용이 우선순위가 더 높다.
	// 생성자 멤버 초기화 영역과 생성자 영역 내에서 모두 member variable을 초기화 하고 있다면
	// 이 경우 생성자 멤버 초기화 영역에서 먼저 초기화를 하고 난 다음
	// 생성자 영역 내에서 초기화를 수행하므로
	// 결과적으로 생성자 영역 내에서 초기화된 내용이 출력된다.
	some.print();

	return 0;
}
