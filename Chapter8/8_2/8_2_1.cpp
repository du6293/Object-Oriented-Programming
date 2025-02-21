#include <iostream>
#include <string>
#include <vector>

/* Encapsulation(캡슐화), Access Specifiers(접근 지정자), Access Functions(접근 함수) 
	
	[Encapsulation]
	private: 디폴트, 다른 영역에서 접근 못함
	public: 외부에서 접근 가능
	protected

*/

using namespace std;

class Date
{
private: // access specifier
	int _month;
	int _day;
	int _year;
	
public:
	// private 영역의 member 변수들을 외부에서 사용 가능하게 하는 access function 선언
	void setDate(const int& month_input, const int& day_input, const int& year_input)
	{
		_month = month_input;
		_day = day_input;
		_year = year_input;
	}

	void setMonth(const int& month_input)
	{
		_month = month_input;
	}

	void setDay(const int& day_input)
	{
		_day = day_input;
	}

	void setYear(const int& year_input)
	{
		_year = year_input;
	}

	const int& getDay()
	{
		return _day; // private 변수인 day 가져오도록 함
	}

	// 동일 class 내 다른 instance의 member 변수에 접근이 가능하다
	void copyFrom(const Date& original)
	{
		_month	= original._month;
		_day	= original._day;
		_year	= original._year;
	}
};

int main()
{
	// instance 생성
	Date today; // { 8, 4, 2025 };
	
	// 해당 member 변수들이 private로 선언되어 있기 때문에 main문에서 사용할 수 없음
	//today._month = 8;
	//today._day = 4;
	//today._year = 2025;

	// access function을 통해 class 내 private 변수에 접근
	today.setDate(8, 4, 2025);
	today.setMonth(10);
	today.setDay(23);
	today.setYear(2026);

	cout << today.getDay() << endl;

	Date copy;
	copy.copyFrom(today);

	return 0;
}
