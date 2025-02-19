#include <iostream>
#include <vector>
/* std::vector�� stackó�� ����ϱ� 
	
	vector���� size�� capacity�� �ִ�.
	������ memory �󿡼� vector�� capacity��ŭ�� ������ ������
	size�� �� �� ���������� ���Ǵ� ���� �ǹ���
	reserve�� �̸� capacity��ŭ �Ҵ��س��� ���� �ǹ��� 

	heap: memory�� � address�� ������ ���� �� ó�������� ������.
			�׸��� new-delete ������ ������.

*/
using namespace std;

int main()
{
	// int *v_ptr = new int[3]{1,2,3};

	vector<int> v{ 1,2,3 };
	
	// vector�� size ����
	//v.resize(10); // element 10��¥�� �޸� �������� �ø�. ������ ������ 0���� ä��
	v.resize(2); // element 2��¥�� �޸� ������ ���� v�� 0,1��° element�� copy

	for (auto &e : v) // size��ŭ�� ��µ�
	//for(unsigned int i = 0; i < v.size() ; ++i)
	{
		cout << e << " ";
	}
	cout << endl;

	// vector size�� �پ������� ���� ũ��� �����Ǿ� ������
	cout << v.size() << " "  << v.capacity() << endl;

	//cout << v[2] << endl; // resize�� ���� ���� ��� element�̹Ƿ� run-time ���� �߻� 
	//cout << v.at(2) << endl; // resize�� ���� ���� ��� element�̹Ƿ� run-time ���� �߻� 

	// data�� ������
	int* ptr = v.data(); // resize�� ���� ���� ��� element���� ������

	cout << ptr[2] << endl;


	return 0;
}
