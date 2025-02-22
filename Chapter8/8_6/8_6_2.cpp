#include <iostream>

/*
	Destuctor(�Ҹ���) : ������ ������ ��� ����� �� ȣ���� �Ǵ� �Լ�
	Constructor(������) : class�� ������ �� ȣ���� �Ǵ� �Լ�

	destructor�� instance�� memory���� ������ �� ���ο��� �ڵ����� ȣ��ȴ�.
	�����Ҵ����� ������� ��쿡�� ������ ����� �ڵ����� memory�� �������� �ʱ� ������ 
	delete�� memory�� ������ ������ destructor�� ȣ��ȴ�.
	destructor�� ���α׷��Ӱ� ���� ȣ���ϴ� ���� ��κ��� ��� �������� �ʴ´�.
*/

using namespace std;

class IntArray
{
private:
	int*	_arr	=	nullptr;
	int		_length	=	0;
	
public:
	// Constructor
	IntArray(const int length_in)
	{
		_length = length_in;
		_arr = new int[_length]; // ��ü �����ϸ鼭 array ���� �Ҵ�����

		cout << "Constructor " << endl;
	}

	int size() 
	{
		return _length;
	}
};

int main()
{
	// Windoe -> Show Diagnostic Tools -> Memory Usage Ȯ��
	// memory�� memory leak �߻� 
	while (true)
	{
		IntArray my_int_arr(10000);
	}

	return 0;
}
