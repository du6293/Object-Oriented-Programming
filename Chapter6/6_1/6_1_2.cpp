#include <iostream>

enum StudentName
{
	JACKJACK,		// 0
	DASH,			// 1
	VIOLET,			// 2
	NUM_STUDENTS,	// 3
};

int main()
{
	using namespace std;

	// array initialization
	// 지정하지 않은 나머지 element는 알아서 0으로 초기화
	// 최신 c++환경에서는 uniform initialization 가능하다.
	int my_array[NUM_STUDENTS+1] { 1,2, }; 

	// enum으로 element 지정이 가능하다.
	cout << my_array[JACKJACK] << endl;
	cout << my_array[DASH] << endl;
	cout << my_array[VIOLET] << endl;
	cout << my_array[3] << endl;


	return 0;
}



