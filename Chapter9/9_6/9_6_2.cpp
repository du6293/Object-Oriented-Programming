#include <iostream>
/* subscript operator [] (첨자 연산자) overloading 하기 
	array 혹은 vector를 사용할 때 []를 사용하여 접근함
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
	// 첫번째 const: return type
	// 두번째 const: function 내 member variable의 값을 바꾸지 않음
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
