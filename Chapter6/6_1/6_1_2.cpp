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
	// �������� ���� ������ element�� �˾Ƽ� 0���� �ʱ�ȭ
	// �ֽ� c++ȯ�濡���� uniform initialization �����ϴ�.
	int my_array[NUM_STUDENTS+1] { 1,2, }; 

	// enum���� element ������ �����ϴ�.
	cout << my_array[JACKJACK] << endl;
	cout << my_array[DASH] << endl;
	cout << my_array[VIOLET] << endl;
	cout << my_array[3] << endl;


	return 0;
}



