#include <iostream>
#include <array>

/* std:: array */

using namespace std;

// array 역시 파라미터로 들어오게 될 경우 한 번 copy가 일어난다.
// 따라서 array가 크다면 copy하는 데 시간이 매우 오래 걸린다.
//void printLength(array<int, 5>my_arr) 

// const를 앞에 붙여 주면 main에 있는 array를 copy하지 않고 바로 사용할 수 있다.
// reference 변수를 사용해도 된다.
void printLength(const array<int, 5> &my_arr)
{
	cout << my_arr.size() << endl;
}


int main()
{
	//int array[5] = { 1,2,3,4,5 };
	
	array<int, 5> my_arr = { 1,2,3,4,5 };

	my_arr = { 0,1,2,3,4 };
	my_arr = { 0,1,2 };

	cout << my_arr[0] << endl; // 0번째 elemeent 출력 -> 0
	//	0번째 element를 미리 체크하고 문제가 생기면 예외를 일으킴, 약간 느리다
	cout << my_arr.at(0) << endl; // 0
	cout << my_arr.size() << endl; // array의 길이 출력 -> 5

	printLength(my_arr); // 5

	return 0;
}
