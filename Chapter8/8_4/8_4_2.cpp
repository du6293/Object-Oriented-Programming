#include <iostream>

/* Constructor�� member initializer list (��� �ʱ�ȭ ����Ʈ) */

using namespace std;

class B
{
private:
	int		_b;

public:
	B(const int& _b_in)
		:_b(_b_in)
	{

	}

};


// class member �ȿ� �ٸ� user-defined type���� ���ǵ� class member�� ���� ���
class Something
{
private:
	int		_i = 100;
	double	_d = 100.0;
	char	_c = 'F';
	int		_arr[5] = {100, 200, 300, 400, 500};
	B		_b{1024};		// class B�� member ������ class Something�� ��

public:	
	// Constructor
	Something()
		//	: _i(1), _d(3.14), _c('a') // member initializer list
		// uniform initialization�� ����, �� ����ȯ �Ұ�
		: _i{ 1 }
		// member variable�� ������ ����� �� , (member variable) ���°� ����
		, _d{ 3.14 }
		, _c{ 'a' }
		, _arr{ 1,2,3,4,5 }
		, _b{ _i - 1 }
	{
		
		_i *= 2;
		_d *= 3.0;
		_c += 3;
		_arr[0] = 5;
		_arr[1] = 10;
		_arr[2] = 15;
		_arr[3] = 20;
		_arr[4] = 25;
	}
	
	void print()
	{
		cout << _i << " " << _d << " " << _c << endl;
		for (auto& e : _arr)
			cout << e << " ";
		cout << endl;
	}
};

int main()
{
	Something some;
	// Ŭ���� �� private ������ ������ ��� �ʱ�ȭ �������� ��� member variable�� �ʱ�ȭ �ϰ� �ִٸ�
	// �� ��� ������ ��� �ʱ�ȭ �������� �ʱ�ȭ �� ������ �켱������ �� ����.
	// ������ ��� �ʱ�ȭ ������ ������ ���� ������ ��� member variable�� �ʱ�ȭ �ϰ� �ִٸ�
	// �� ��� ������ ��� �ʱ�ȭ �������� ���� �ʱ�ȭ�� �ϰ� �� ����
	// ������ ���� ������ �ʱ�ȭ�� �����ϹǷ�
	// ��������� ������ ���� ������ �ʱ�ȭ�� ������ ��µȴ�.
	some.print();

	return 0;
}
