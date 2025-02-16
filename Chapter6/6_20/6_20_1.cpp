#include <iostream>
#include <array>

/* std:: array */

using namespace std;

// array ���� �Ķ���ͷ� ������ �� ��� �� �� copy�� �Ͼ��.
// ���� array�� ũ�ٸ� copy�ϴ� �� �ð��� �ſ� ���� �ɸ���.
//void printLength(array<int, 5>my_arr) 

// const�� �տ� �ٿ� �ָ� main�� �ִ� array�� copy���� �ʰ� �ٷ� ����� �� �ִ�.
// reference ������ ����ص� �ȴ�.
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

	cout << my_arr[0] << endl; // 0��° elemeent ���
	//	0��° element�� �̸� üũ�ϰ� ������ ����� ���ܸ� ����Ŵ, �ణ ������
	cout << my_arr.at(0) << endl;	
	cout << my_arr.size() << endl; // array�� ���� ���

	printLength(my_arr);

	return 0;
}
