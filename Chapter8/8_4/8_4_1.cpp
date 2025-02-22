#include <iostream>

/* Constructor�� member initializer list (��� �ʱ�ȭ ����Ʈ) */

using namespace std;

class Something
{
private:
	int		_i;
	double	_d;
	char	_c;
	int		_arr[5];

public:	
	// Constructor
	Something()
		//	: _i(1), _d(3.14), _c('a') // member initializer list
		: _i{ 1 }, _d{ 3.14 }, _c{ 'a' }, _arr {1,2,3,4,5}// uniform initialization�� ����, �� ����ȯ �Ұ�
	{
		/*
		_i = 1;
		_d = 3.14;
		_c = 'a';
		*/
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

	some.print();

	return 0;
}
