#include <iostream>
#include <vector>
/* std::vector�� stackó�� ����ϱ� 
	
	vector���� size�� capacity�� �ִ�.
	������ memory �󿡼� vector�� capacity��ŭ�� ������ ������
	size�� �� �� ���������� ���Ǵ� ���� �ǹ���

	heap: memory�� � address�� ������ ���� �� ó�������� ������.
			�׸��� new-delete ������ ������.

*/
using namespace std;

int main()
{
	// int *v_ptr = new int[3]{1,2,3};

	vector<int> v{ 1,2,3 };

	// reserve()�� memory capacity�� �̸� n�̻� Ȯ���� ���Ҵ� ����� ����
	// reserve �� ������ ���� ������ ���߿� ���� �޸𸮸� �ٲ���� ��ü�� �� ������
	v.reserve(1024); 

	for (auto &e : v) // size��ŭ�� ��µ�
	//for(unsigned int i = 0; i < v.size() ; ++i)
	{
		cout << e << " ";
	}
	cout << endl;

	// vector size�� �پ������� ���� ũ��� �����Ǿ� ������
	// capacity()�� vector�� ���� �Ҵ��� �ִ� memory ũ�⸦ ��ȯ
	// size�� capacity�� �ʰ��ϸ� ���ο� �޸𸮸� �Ҵ��ϰ� ���� data�� �����ϴ� ���Ҵ� �߻�
	cout << v.size() << " "  << v.capacity() << endl;

	//cout << v[2] << endl; // resize�� ���� ���� ��� element�̹Ƿ� run-time ���� �߻� 
	//cout << v.at(2) << endl; // resize�� ���� ���� ��� element�̹Ƿ� run-time ���� �߻� 

	// data�� ������
	int* ptr = v.data(); // resize�� ���� ���� ��� element���� ������

	cout << ptr[2] << endl;

	return 0;
}
