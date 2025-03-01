#include <iostream>
/* subscript operator [] (÷�� ������) overloading �ϱ� 
	array Ȥ�� vector�� ����� �� []�� ����Ͽ� ������
*/
using namespace std;

class IntList
{
private:
	int m_list[10];
public:
	void setItem(int index, int value)
	{
		m_list[index] = value;
	}
	int getItem(int index)
	{
		return m_list[index];
	}

	// array ��ü�� pointer�� return
	int* getList()
	{
		return m_list;
	}
};

int main()
{

	IntList my_list;
	my_list.setItem(3, 1);
	cout << my_list.getItem(3) << endl; // 1
	my_list.getList()[3] = 10;
	cout << my_list.getList()[3] << endl; // 10


	return 0;
}
