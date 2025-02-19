#include <iostream>
#include <vector>
/* std::vector를 stack처럼 사용하기 
	
	vector에는 size와 capacity가 있다.
	실제로 memory 상에서 vector는 capacity만큼의 공간을 차지함
	size는 그 중 실질적으로 사용되는 양을 의미함

	heap: memory의 어떤 address에 공간을 잡을 지 처리과정이 느리다.
			그리고 new-delete 과정이 느리다.

*/
using namespace std;

int main()
{
	// int *v_ptr = new int[3]{1,2,3};

	vector<int> v{ 1,2,3 };

	// reserve()는 memory capacity를 미리 n이상 확보해 재할당 비용을 줄임
	// reserve 된 공간이 많이 있으면 나중에 새로 메모리를 바꿔오고 교체할 때 빠르다
	v.reserve(1024); 

	for (auto &e : v) // size만큼만 출력됨
	//for(unsigned int i = 0; i < v.size() ; ++i)
	{
		cout << e << " ";
	}
	cout << endl;

	// vector size는 줄어들었지만 원래 크기는 고정되어 일정함
	// capacity()는 vector가 현재 할당한 최대 memory 크기를 반환
	// size가 capacity를 초과하면 새로운 메모리를 할당하고 기존 data를 복사하는 재할당 발생
	cout << v.size() << " "  << v.capacity() << endl;

	//cout << v[2] << endl; // resize된 영역 밖을 벗어난 element이므로 run-time 오류 발생 
	//cout << v.at(2) << endl; // resize된 영역 밖을 벗어난 element이므로 run-time 오류 발생 

	// data를 가져옴
	int* ptr = v.data(); // resize된 영역 밖을 벗어난 element값을 가져옴

	cout << ptr[2] << endl;

	return 0;
}
