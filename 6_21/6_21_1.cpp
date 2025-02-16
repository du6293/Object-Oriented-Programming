#include <iostream>
#include <vector>
/* std::vector 
	std::array보다 사용하기 편하다
*/
using namespace std;

int main()
{
	// std::array는 정적할당되므로 size를 미리 주어야 한다.
	// std::array<int, 5> array;

	// std::vector는 동적할당되므로 size를 몰라도 된다.
	vector<int> array;

	vector<int> array2 = { 1,2,3,4,5 };

	cout << array2.size() << endl;

	vector<int> array3 = { 1,2,3, };

	cout << array3.size() << endl;

	// uniform initialization 가능
	vector<int> array4 { 1,2,3, };

	cout << array4.size() << endl;

	return 0;
}
