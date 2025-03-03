#include <iostream>
#include <cassert>
#include <initializer_list>

/* std::initializer_list */
using namespace std;

class IntArray
{
private:
	unsigned m_length = 0;
	int* m_data = nullptr; // memory 동적 할당
public:
	// constructor1: paramerter로 length가 들어오면 
	// length 만큼의 memory를 할당
	IntArray(unsigned length)
		:m_length(length)
	{
		m_data = new int[length];
	}

	// initializer_list를 입력으로 받는 constructor2
	IntArray(const initializer_list<int>& list)
		: IntArray(list.size())	// constructor1을 먼저 호출해서 memory를 할당받음
	{
		int count = 0;
		for (auto& element : list)
		{
			m_data[count] = element; // 할당 받은 메모리에 data를 copy
			++count;
		}

		// initializer_list는 []를 지원하지 않기 때문에
		// 아래 코드는 오류남
		//for (unsigned count = 0; count < list.size(); ++count)
		//	m_data[count] = list[count];
	}

	// destructor
	~IntArray()
	{
		delete[] this->m_data;
	}

	// output 연산자 overloading
	friend std::ostream& operator << (ostream& out, IntArray & arr)
	{
		for (unsigned i = 0; i < arr.m_length; ++i)
			out << arr.m_data[i] << " ";
		out << endl;
		return out;
	}
};

int main()
{
	int my_arr1[5] = { 1,2,3,4,5 };
	int* my_arr2 = new int[5] {1, 2, 3, 4, 5};

	// initializer_list로 자동으로 data type을 찾음
	auto i1 = { 10,20,30 };

	// initializer_list를 입력으로 받는 constructor2 호출
	IntArray int_array { 1,2,3,4,5,6,7,8,9,0 }; // 1 2 3 4 5 6 7 8 9 0
	cout << int_array << endl;

	return 0;
}
