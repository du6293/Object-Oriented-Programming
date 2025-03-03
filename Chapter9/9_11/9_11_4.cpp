#include <iostream>
#include <cassert>
/* ���Կ����� overloading
	Deep copy(���� ����) vs Shallow copy(���� ����)

	shallow copy: �ּҰ��� �����ϴ� �� (= default copy constructor�� �̷��� ����)
	deep copy: memory�� ���� �Ҵ��ϰ� �Ҵ��� �޸𸮿� ���� copy�ؿ�
	
	�����Ҵ�� �޸𸮸� �ٷ� �� shallow copy�� �������� ����
	
	�Ϲ� shllow copy�� �ϴ� constructor�� deep copy�� �ϴ� copy constructor�� 
	������ �� ���� ��찡 �����.
	�� �� ���� ���� �����, copy constructor�� ���� �����ϴ� �� ����.
	������ �׷� �� ���� �� shallow copy�� �Ǵ� �� ���� ����
	delete�� ����ؼ� constructor�� ���� shallow copy�� ���°� ����. 
	MyString(const MyString& source) = delete;
*/
using namespace std;

/* assignment operator�� ȣ��Ǵ� ��� */
class MyString
{
public:
	char* m_data = nullptr; // �޸� ���� �Ҵ�  
	int m_length = 0;

public:
	/* Constructor */
	MyString(const char* source = "")
	{
		assert(source);

		m_length = strlen(source) + 1;
		m_data = new char[m_length];

		for (int i = 0; i < m_length; ++i)
			m_data[i] = source[i];
		
		m_data[m_length - 1] = '\0';
	}

	// shallow copy�� �ӽ÷� ����
	MyString(const MyString& source) = delete;

	/*
	// Copy Constructor: �ڱ� �ڽ��� parameter�� ����
	MyString(const MyString& source)
	{
		cout << "Copy constructor " << endl;

		m_length = source.m_length;
	
		if (source.m_data != nullptr) // memory�� ���� ���� ���
		{
			// Deep copy
			// m_data�� memory�� ���� �Ҵ�ް� ����
			m_data = new char[m_length]; 
			// source�� ���� �ִ� ������ �Ҵ���� m_data memory�� copy�Ѵ�
			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;
	}
	*/

	/* ���� ������ overloading */
	MyString& operator = (const MyString& source) // ���� type�� parameter�� ����
	{
		/*
		// shallow copy
		this->m_data = source.m_data;
		this->m_length = source.m_length;
		*/

		cout << "Assignment operator " << endl;

		// ���Կ������� ��� �ڱ� �ڽſ��� ������ �� ����
		// �� �� ���α׷� �� ������ ���� �� �ִ�
		if (this == &source) // prevent self-assignment
			return *this;

		// ���� ���� �Ҵ�Ǿ� �ִ� memory�� �ִٸ� ����
		delete[] m_data;

		m_length = source.m_length;
		
		if (source.m_data != nullptr)
		{
			// ���ο� memory �Ҵ� ����
			m_data = new char[m_length];
			// �Ҵ� ���� memory�� data copy����
			for(int i = 0; i < m_length ; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;
		return *this;
	}

	/* Destructor */
	~MyString()
	{
		delete[] m_data;
	}
	/*
	{
		delete[] m_data;
	}
	*/
	char* getString() { return m_data; }
	int getLength() { return m_length; }
};


int main()
{
	MyString hello("Hello"); // new ȣ�� O
	
	// str1 ��ü�� hello ��ü���� copy�Ǿ� �����ǹǷ� 
	// = ��� assignment operator�� ������ copy constructor ȣ��ȴ�.
	MyString str1 (hello); 

	// constructor ȣ��
	MyString str2;
	// assignment operator ȣ��
	str2 = hello;
	
	return 0;
}
