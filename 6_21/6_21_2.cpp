#include <iostream>
#include <vector>

/* std::vector 
	std::array보다 사용하기 편하다
	- array와 다르게 메모리를 알아서 delete해준다. > memory leak 방지
	- vector의 길이를 스스로 기억한다. > 함수의 파라미터로 보낼 때 용이
	- vector의 길이를 resize()로 마음대로 바꿀 수 있다. > memory를 새로 할당받아서 copy해주고 나머지를 이어 줄 필요 없음
*/

using namespace std;

int main()
{

	int* my_arr = new int[5];
	vector<int> arr = { 1,2,3,4,5 };

	// vector 길이 변경
	arr.resize(10);

	for (auto& itr : arr)
		cout << itr << " " ;
	cout << endl;

	cout << arr.size() << endl;
	cout << arr[1] << endl;
	cout << arr.at(1) << endl;

	delete[] my_arr;// array는 반드시 지워주어야 한다.

	return 0;
}
