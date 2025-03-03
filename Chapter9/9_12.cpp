#include <iostream>
#include <cassert>
#include <initializer_list>

/* std::initializer_list */
using namespace std;

class IntArray
{
private:
	unsigned m_length = 0;
	int* m_data = nullptr; // memory ���� �Ҵ�
public:
	// constructor1: paramerter�� length�� ������ 
	// length ��ŭ�� memory�� �Ҵ�
	IntArray(unsigned length)
		:m_length(length)
	{
		m_data = new int[length];
	}

	// initializer_list�� �Է����� �޴� constructor2
	IntArray(const initializer_list<int>& list)
		: IntArray(list.size())	// constructor1�� ���� ȣ���ؼ� memory�� �Ҵ����
	{
		int count = 0;
		for (auto& element : list)
		{
			m_data[count] = element; // �Ҵ� ���� �޸𸮿� data�� copy
			++count;
		}

		// initializer_list�� []�� �������� �ʱ� ������
		// �Ʒ� �ڵ�� ������
		//for (unsigned count = 0; count < list.size(); ++count)
		//	m_data[count] = list[count];
	}

	// destructor
	~IntArray()
	{
		delete[] this->m_data;
	}

	// output ������ overloading
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

	// initializer_list�� �ڵ����� data type�� ã��
	auto i1 = { 10,20,30 };

	// initializer_list�� �Է����� �޴� constructor2 ȣ��
	IntArray int_array { 1,2,3,4,5,6,7,8,9,0 }; // 1 2 3 4 5 6 7 8 9 0
	cout << int_array << endl;

	return 0;
}
