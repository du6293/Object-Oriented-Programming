#include <iostream>
/* subscript operator [] (÷�� ������) overloading �ϱ� 
	array Ȥ�� vector�� ����� �� []�� ����Ͽ� ������
*/
using namespace std;

class IntList
{
private:
	int m_list[10] = {1,2,3,4,5,6,7,8,9,10};
public:

	// non-const overloading
	int& operator [] (const int index)
	{
		return m_list[index];
	}
	
	// const overloading
	// ù��° const: return type
	// �ι�° const: function �� member variable�� ���� �ٲ��� ����
	const int& operator [] (const int index) const
	{
		return m_list[index];
	}
};

int main()
{
	/*
	// non-const overloading
	IntList my_list;
	my_list[3] = 10;
	cout << my_list[3] << endl; // 10
	*/

	
	// const overloading
	const IntList my_list;
	cout << my_list[3] << endl; // 4
	

	return 0;
}
