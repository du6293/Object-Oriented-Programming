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

class Simple
{
private:
	int _id;

public:
	Simple(const int& id_in)
		: _id(id_in)
	{
		cout << "Constructor " << _id << endl;
	}

	// Destructor
	~Simple()
	{
		cout << "Destructor " << _id << endl;
	}
};

int main()
{
	// Constructor�� ����ǰ� ���� Destructor�� ����ȴ�.
	//Simple s1(0);

	// �����Ҵ絵 �����ϴ�. 
	Simple* s1 = new Simple(0);

	Simple s2(1);

	// delete�Ǹ鼭 destructor�� �ڵ����� ȣ��ȴ�.
	delete s1;

	return 0;
}
