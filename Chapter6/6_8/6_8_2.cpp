#include <iostream>
/* �����Ϳ� ���� �迭*/
using namespace std;

// �Ķ���ͷ� array�� ���� ���� array[]�� ���������� �������̴�.
//void printArray(int *array)�� ����
//void printArray(int array[])
void printArray(int* array)
{
	cout << sizeof(array) << endl;
	cout << *array << endl;

	//*array = 100;

}

int main()
{
	int array[5] = {9,7,5,3,1};

	cout << sizeof(array) << endl; // 4bytes * 5 = 20 bytes

	int* ptr = array;
	cout << sizeof(ptr) << endl; // ������ ������ ũ��� 4bytes
	cout << endl;

	printArray(array);	// 4bytes
	cout << array[0] << " " << *array << endl;
	cout << endl;

	// pointer arithmetic: �����Ϳ��� ���� ���ϰ� ���� ��
	cout << *ptr << " " << *(ptr + 1) << endl;
	return 0;
}
