#include <iostream>
#include <string>

/*
	enum type을 header file에 넣고 include 해서 
	여러 cpp file에서 사용하도록 연습해볼 것
*/

/* User Defined data types */
enum Color
{
	COLOR_BLACK		=	-3,	// 초기화 하지 않으면 자동으로 0
	// 강제 할당 가능
	COLOR_RED		=	5,	// 초기화 하지 않으면 자동으로 1
	COLOR_BLUE		=	5,	// 초기화 하지 않으면 자동으로 2
	COLOR_GREEN,			// 초기화 하지 않으면 자동으로 3
};

/* enumeration간 내부 열거형의 이름이 중복되면 안된다. */
enum Feeling
{
	HAPPY,
	JOY,
	BLUE,
};

int main()
{
	using namespace std;

	Color paint = COLOR_BLACK;
	Color house(COLOR_BLUE);
	Color apple{ COLOR_RED };

	Color my_color1 = COLOR_GREEN;
	cout << my_color1 << " " << COLOR_BLACK << endl;

	if (COLOR_RED == COLOR_BLUE)
	{
		cout << "Equal" << endl;
		
	}
	else 
	{
		cout << COLOR_RED << " " << COLOR_BLUE << endl;
	}

	int color_id = COLOR_RED;
	cout << color_id << endl;

	// integer 변수값을 열거형 변수에 바로 대입할 수는 없음
	// Color my_color2 = color_id; 
	// 하지만 type casting은 가능하다.
	Color my_color2 = static_cast<Color>(3);
	
	// 열거형 변수는 cin으로 직접 입력 받을 수 없다.
	//cin >> my_color2;
	// 하지만 detour해서 입력으로 넣는 것은 가능하다. 
	int in_number;
	cin >> in_number;

	if (in_number == COLOR_BLACK)
	{
		my_color2 = COLOR_BLACK;
	}
	//...

	// 문자열 입력으로 받아서 열거형 변수에 값을 대입할 수도 있음
	// 이 방법은 권장되지는 않음
	string str_input;

	std::getline(cin, str_input);
	if (str_input == "COLOR_BLACK")
	{
		my_color2 = static_cast<Color>(0);
	}

	return 0;
}
