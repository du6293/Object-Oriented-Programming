#include <iostream>
#include <cassert>
/* 대입연산자 overloading
	Deep copy(깊은 복사) vs Shallow copy(얕은 복사)
*/
using namespace std;

/* default copy constructor가 호출되는 경우 */
class MyString
{
public:
	char* m_data = nullptr; // 메모리 동적 할당  
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
	MyString hello("Hello"); // new 호출 O

	// class 내에서 new로 할당받은 memory address 출력
	cout << (int*)hello.m_data << endl; // 00AB9B68
	cout << hello.getString() << endl; // Hello

	// scope 내에 local variable 생성 
	// -> 해당 scope를 벗어나면 사라짐
	{	// copy constructor 호출됨
		// copy는 포인터 주소를 복사한 것이므로 
		// hello의 m_data와 copy의 m_data는 같은 memory address를 가리킨다
		// scpoe 내에서 copy변수가 복사되기 때문에 new는 호출되지 않는다.
		// 하지만 scope를 벗어날 땐 delete가 1번 호출된다.
		MyString copy = hello; // new 호출 x
		cout << (int*)copy.m_data << endl; // 00AB9B68
		cout << copy.getString() << endl; // Hello
	} // delete 호출 O
	  
	// copy변수가 delete 되면서 hello도 동시에 delete 됨
	cout << hello.getString() << endl; // Hello로 출력되지 x


	return 0;
}
