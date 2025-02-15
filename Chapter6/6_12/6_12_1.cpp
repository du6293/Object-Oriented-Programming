#include <iostream>

/* Dynamically Allocating Arrays (���� �Ҵ� �迭) 
	���� �Ҵ� �迭�� �迭 ũ�Ⱑ compile time�� �����ȴ�. 
	���� �Ҵ� �迭�� run time�� �迭�� ũ�⸦ �����ϰ�  
	�׶��׶� �޸𸮸� OS�κ��� �޾ƿ��� ������ �������� ����� �����ϴ�. 
*/

using namespace std;

int main()
{
	// ���� �Ҵ� �迭
	//const int length = 5;
	//int array[length];

	// ���� �Ҵ� �迭
	int length;
	cin >> length;
	// �迭�� ��� element���� 0���� �ʱ�ȭ
	//int* array = new int[length]();
	//int* array = new int[length] {};
	int* array = new int[length] {11,22,33,44,55,66}; // ���� 6���� �� ���� ũ��� �Ҵ����ָ� memory �浹 �Ͼ debug �� ���� �߻���

	for (int i = 0; i < length; i++)
	{
		cout << (uintptr_t)&array[i] << endl;
		cout << array[i] << endl;
	}

	delete [] array;

	return 0;
}
