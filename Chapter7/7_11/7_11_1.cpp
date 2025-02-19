#include <iostream>
#include <vector>
/* std::vector를 stack처럼 사용하기 
	
	vector에는 size와 capacity가 있다.
	실제로 memory 상에서 vector는 capacity만큼의 공간을 차지함
	size는 그 중 실질적으로 사용되는 양을 의미함
	reserve는 미리 capacity만큼 할당해놓는 것을 의미함 

	heap: memory의 어떤 address에 공간을 잡을 지 처리과정이 느리다.
			그리고 new-delete 과정이 느리다.

*/
using namespace std;

int main()
{
	// int *v_ptr = new int[3]{1,2,3};

	vector<int> v{ 1,2,3 };
	
	// vector의 size 변경
	//v.resize(10); // element 10개짜리 메모리 공간으로 늘림. 나머지 공간은 0으로 채움
	v.resize(2); // element 2개짜리 메모리 공간에 벡터 v의 0,1번째 element를 copy

	for (auto &e : v) // size만큼만 출력됨
	//for(unsigned int i = 0; i < v.size() ; ++i)
	{
		cout << e << " ";
	}
	cout << endl;

	// vector size는 줄어들었지만 원래 크기는 고정되어 일정함
	cout << v.size() << " "  << v.capacity() << endl;

	//cout << v[2] << endl; // resize된 영역 밖을 벗어난 element이므로 run-time 오류 발생 
	//cout << v.at(2) << endl; // resize된 영역 밖을 벗어난 element이므로 run-time 오류 발생 

	// data를 가져옴
	int* ptr = v.data(); // resize된 영역 밖을 벗어난 element값을 가져옴

	cout << ptr[2] << endl;


	return 0;
}
