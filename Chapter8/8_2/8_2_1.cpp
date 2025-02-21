#include <iostream>
#include <string>
#include <vector>

/* Encapsulation(ĸ��ȭ), Access Specifiers(���� ������), Access Functions(���� �Լ�) 
	
	[Encapsulation]
	private: ����Ʈ, �ٸ� �������� ���� ����
	public: �ܺο��� ���� ����
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
	// private ������ member �������� �ܺο��� ��� �����ϰ� �ϴ� access function ����
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
		return _day; // private ������ day ���������� ��
	}

	// ���� class �� �ٸ� instance�� member ������ ������ �����ϴ�
	void copyFrom(const Date& original)
	{
		_month	= original._month;
		_day	= original._day;
		_year	= original._year;
	}
};

int main()
{
	// instance ����
	Date today; // { 8, 4, 2025 };
	
	// �ش� member �������� private�� ����Ǿ� �ֱ� ������ main������ ����� �� ����
	//today._month = 8;
	//today._day = 4;
	//today._year = 2025;

	// access function�� ���� class �� private ������ ����
	today.setDate(8, 4, 2025);
	today.setMonth(10);
	today.setDay(23);
	today.setYear(2026);

	cout << today.getDay() << endl;

	Date copy;
	copy.copyFrom(today);

	return 0;
}
