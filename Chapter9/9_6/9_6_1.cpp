#include <iostream>
/* subscript operator [] (첨자 연산자) overloading 하기 
	array 혹은 vector를 사용할 때 []를 사용하여 접근함
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

	// array 자체를 pointer로 return
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
