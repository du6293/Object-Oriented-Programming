#include <iostream>
#include <vector>
/* std::vector 
	std::array���� ����ϱ� ���ϴ�
*/
using namespace std;

int main()
{
	// std::array�� �����Ҵ�ǹǷ� size�� �̸� �־�� �Ѵ�.
	// std::array<int, 5> array;

	// std::vector�� �����Ҵ�ǹǷ� size�� ���� �ȴ�.
	vector<int> array;

	vector<int> array2 = { 1,2,3,4,5 };

	cout << array2.size() << endl;

	vector<int> array3 = { 1,2,3, };

	cout << array3.size() << endl;

	// uniform initialization ����
	vector<int> array4 { 1,2,3, };

	cout << array4.size() << endl;

	return 0;
}
