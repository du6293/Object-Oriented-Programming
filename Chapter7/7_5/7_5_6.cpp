#include <iostream>
#include <array>
/* 다양한 return value들 (값, 참조, 주소, 구조체, 튜플)*/
using namespace std;
/* Case2. return type이 reference일 때 */
int& get(array<int, 100>& my_array, int ix)
{
	return my_array[ix];
}

int main()
{
	
	array<int, 100> my_array; // array가 메모리에 잡힘
	my_array[30] = 10;

	get(my_array, 30) = 1024; // 1 element의 reference를 return 
	
	cout << my_array[30] << endl;

	return 0;
}
