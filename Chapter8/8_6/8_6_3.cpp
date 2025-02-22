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

		/*
			- array ��� �ÿ��� new - delete�� ���� class ���� �־��־�� ������,
			  vector�� ����ϴ� ��� vector�� ��� �� delete ����� ����ֱ� ������
			  ���� delete�� �Է��� ���� �ʾƵ� �ȴ�.
		
			- [vector�� array���� �����Ҵ� ���鿡�� �� ������ ����]
			  array�� ����ؼ� �����Ҵ��� �� new - delete ������ ������ ������ 
			  vector�� ����ؼ� resize(), capacity()�� Ȱ���ϴ� ���� �� ������.
			  �̹� vector�� �ڵ����� �����Ҵ� ����� ����ֱ� ����
		*/

		cout << "Constructor " << endl;
	}

	int size() 
	{
		return _length;
	}

	// Destructor
	~IntArray() 
	{
		// nullptr�� delete���� ������ ����� ������ ������ �߰����ش�.
		if (_arr != nullptr)
			delete[] _arr;
	}
};

int main()
{
	// Windoe -> Show Diagnostic Tools -> Memory Usage Ȯ��
	// class �� memory delete�� �ϹǷ� delete�� �ڵ����� ȣ���
	// memory leak ����
	while (true)
	{
		IntArray my_int_arr(10000);
	}

	return 0;
}
