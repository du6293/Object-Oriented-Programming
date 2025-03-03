#include <iostream>
#include <cassert>
/* ���Կ����� overloading
	Deep copy(���� ����) vs Shallow copy(���� ����)
*/
using namespace std;

/* default copy constructor�� ȣ��Ǵ� ��� */
class MyString
{
public:
	char* m_data = nullptr; // �޸� ���� �Ҵ�  
	int m_length = 0;

public:
	MyString(const char* source = "")
	{
		assert(source);

		m_length = strlen(source) + 1;
		m_data = new char[m_length];

		for (int i = 0; i < m_length; ++i)
			m_data[i] = source[i];
		
		m_data[m_length - 1] = '\0';
	}
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

	// class ������ new�� �Ҵ���� memory address ���
	cout << (int*)hello.m_data << endl; // 00AB9B68
	cout << hello.getString() << endl; // Hello

	// scope ���� local variable ���� 
	// -> �ش� scope�� ����� �����
	{	// copy constructor ȣ���
		// copy�� ������ �ּҸ� ������ ���̹Ƿ� 
		// hello�� m_data�� copy�� m_data�� ���� memory address�� ����Ų��
		// scpoe ������ copy������ ����Ǳ� ������ new�� ȣ����� �ʴ´�.
		// ������ scope�� ��� �� delete�� 1�� ȣ��ȴ�.
		MyString copy = hello; // new ȣ�� x
		cout << (int*)copy.m_data << endl; // 00AB9B68
		cout << copy.getString() << endl; // Hello
	} // delete ȣ�� O
	  
	// copy������ delete �Ǹ鼭 hello�� ���ÿ� delete ��
	cout << hello.getString() << endl; // Hello�� ��µ��� x


	return 0;
}
