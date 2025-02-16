#include <iostream>
#include <vector>

/* std::vector 
	std::array���� ����ϱ� ���ϴ�
	- array�� �ٸ��� �޸𸮸� �˾Ƽ� delete���ش�. > memory leak ����
	- vector�� ���̸� ������ ����Ѵ�. > �Լ��� �Ķ���ͷ� ���� �� ����
	- vector�� ���̸� resize()�� ������� �ٲ� �� �ִ�. > memory�� ���� �Ҵ�޾Ƽ� copy���ְ� �������� �̾� �� �ʿ� ����
*/

using namespace std;

int main()
{

	int* my_arr = new int[5];
	vector<int> arr = { 1,2,3,4,5 };

	// vector ���� ����
	arr.resize(10);

	for (auto& itr : arr)
		cout << itr << " " ;
	cout << endl;

	cout << arr.size() << endl;
	cout << arr[1] << endl;
	cout << arr.at(1) << endl;

	delete[] my_arr;// array�� �ݵ�� �����־�� �Ѵ�.

	return 0;
}
