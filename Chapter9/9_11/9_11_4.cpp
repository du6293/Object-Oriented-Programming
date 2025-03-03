#include <iostream>
#include <cassert>
/* 대입연산자 overloading
	Deep copy(깊은 복사) vs Shallow copy(얕은 복사)

	shallow copy: 주소값만 복사하는 것 (= default copy constructor도 이렇게 동작)
	deep copy: memory를 새로 할당하고 할당한 메모리에 값을 copy해옴
	
	동적할당된 메모리를 다룰 땐 shallow copy를 권장하지 않음
	
	일반 shllow copy를 하는 constructor와 deep copy를 하는 copy constructor를 
	구분할 수 없는 경우가 생긴다.
	이 때 가장 좋은 방법은, copy constructor를 직접 구현하는 게 좋다.
	하지만 그럴 수 없을 때 shallow copy가 되는 걸 막기 위해
	delete를 사용해서 constructor로 인한 shallow copy를 막는게 좋다. 
	MyString(const MyString& source) = delete;
*/
using namespace std;

/* assignment operator가 호출되는 경우 */
class MyString
{
public:
	char* m_data = nullptr; // 메모리 동적 할당  
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

	// shallow copy를 임시로 막음
	MyString(const MyString& source) = delete;

	/*
	// Copy Constructor: 자기 자신이 parameter로 들어옴
	MyString(const MyString& source)
	{
		cout << "Copy constructor " << endl;

		m_length = source.m_length;
	
		if (source.m_data != nullptr) // memory를 갖고 있을 경우
		{
			// Deep copy
			// m_data가 memory를 새로 할당받고 있음
			m_data = new char[m_length]; 
			// source가 갖고 있는 내용을 할당받은 m_data memory로 copy한다
			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;
	}
	*/

	/* 대입 연산자 overloading */
	MyString& operator = (const MyString& source) // 같은 type이 parameter로 들어옴
	{
		/*
		// shallow copy
		this->m_data = source.m_data;
		this->m_length = source.m_length;
		*/

		cout << "Assignment operator " << endl;

		// 대입연산자의 경우 자기 자신에게 대입할 수 있음
		// 이 때 프로그램 상 문제가 생길 수 있다
		if (this == &source) // prevent self-assignment
			return *this;

		// 현재 기준 할당되어 있는 memory가 있다면 지움
		delete[] m_data;

		m_length = source.m_length;
		
		if (source.m_data != nullptr)
		{
			// 새로운 memory 할당 받음
			m_data = new char[m_length];
			// 할당 받은 memory에 data copy해줌
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
	MyString hello("Hello"); // new 호출 O
	
	// str1 객체가 hello 객체에서 copy되어 생성되므로 
	// = 라는 assignment operator가 있지만 copy constructor 호출된다.
	MyString str1 (hello); 

	// constructor 호출
	MyString str2;
	// assignment operator 호출
	str2 = hello;
	
	return 0;
}
