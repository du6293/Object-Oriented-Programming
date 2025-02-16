#include <iostream>
#include <array>
#include <algorithm>

/* std:: array */

using namespace std;

int main()
{
	array<int, 5> my_arr = { 1,21,3,40,5 };

	for (auto &element : my_arr)
		cout << element << " ";
	cout << endl;

	// 오름차순 정렬
	sort(my_arr.begin(), my_arr.end());

	for (auto& element : my_arr)
		cout << element << " ";
	cout << endl;

	// 내림차순 정렬
	sort(my_arr.rbegin(), my_arr.rend());

	for (auto& element : my_arr)
		cout << element << " ";
	cout << endl;

	return 0;
}
