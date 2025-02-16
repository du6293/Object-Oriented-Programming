#include <iostream>
#include <limits>
#include <algorithm>


/* For-each 반복문 
	array를 동적할당 하게 되면 for-each를 사용할 수 없다. 
*/


using namespace std;

int main()
{
	int fibonacci[] = { 0,1,1,2,3,5,8,13,21,34,55,89 };

	// change array values
	for (auto &number : fibonacci)
		number *= 10;

	// print output
	for (const auto &number : fibonacci)
		cout << number << " ";
	cout << endl;
	
	// find max number
	int max_number = std::numeric_limits<int>::lowest();

	for (const auto& n : fibonacci)
		max_number = std::max(max_number, n);
	cout << max_number << endl;
	return 0;
}
