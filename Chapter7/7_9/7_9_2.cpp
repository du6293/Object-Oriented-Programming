#include <iostream>
#include <array>
/* 함수포인터 (Function Pointers) */
using namespace std;

bool isEven(const int& number)
{
	if (number % 2 == 0) return true;
	else return false;
}

bool isOdd(const int& number)
{
	if (number % 2 != 0) return true;
	else return false;
}

void printNumbers(const array<int, 10>& my_array, bool(*check_fcn)(const int&))
{
	for (auto& element : my_array)
	{
		if (check_fcn(element) == true)
			cout << element;
	}
	cout << endl;
}

int main()
{
	array<int, 10> my_array = { 0,1,2,3,4,5,6,7,8,9 };

	printNumbers(my_array, isEven);
	printNumbers(my_array, isOdd);

	return 0;
}
