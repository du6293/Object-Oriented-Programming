#include <iostream>
#include <array>
#include <functional>

/* �Լ� ������ (Function Pointers) */
/* Case3. functional ���̺귯�� ��� */

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

//typedef bool(*check_fcn_t)(const int&) ;

// type ailiasing ��� ����
using check_fcn_t = bool(*)(const int&);

void printNumbers(const array<int, 10>& my_array, function<bool(const int&)> check_fcn)
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

	function<bool(const int&)> fcnptr = isEven;



	printNumbers(my_array, fcnptr);

	fcnptr = isOdd;
	printNumbers(my_array, fcnptr);

	return 0;
}
