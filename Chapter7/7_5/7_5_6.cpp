#include <iostream>
#include <array>
/* �پ��� return value�� (��, ����, �ּ�, ����ü, Ʃ��)*/
using namespace std;
/* Case2. return type�� reference�� �� */
int& get(array<int, 100>& my_array, int ix)
{
	return my_array[ix];
}

int main()
{
	
	array<int, 100> my_array; // array�� �޸𸮿� ����
	my_array[30] = 10;

	get(my_array, 30) = 1024; // 1 element�� reference�� return 
	
	cout << my_array[30] << endl;

	return 0;
}
