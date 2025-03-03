#include <iostream>
#include <cassert>
/* 대입연산자 overloading
	Deep copy(깊은 복사) vs Shallow copy(얕은 복사)

	shallow copy: 주소값만 복사하는 것 (= default copy constructor도 이렇게 동작)
	deep copy: memory를 새로 할당하고 할당한 메모리에 값을 copy해옴
	
	동적할당된 메모리를 다룰 땐 shallow copy를 권장하지 않음

*/
using namespace std;

/* copy constructor가 호출되는 경우 */
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

	/* Copy Constructor: 자기 자신이 parameter로 들어옴 */
	MyString(const MyString& source)
	{
		cout << "Copy constructor " << endl;

		m_length = source.m_length;
	
		if (source.m_data != nullptr) // memory를 갖고 있을 경우
		{
			/* Deep copy */
			// m_data가 memory를 새로 할당받고 있음
			m_data = new char[m_length]; 
			// source가 갖고 있는 내용을 할당받은 m_data memory로 copy한다
			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;
	}

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

	// class 내에서 new로 할당받은 memory address 출력
	cout << (int*)hello.m_data << endl; // 00A505A8
	cout << hello.getString() << endl; // Hello

	// scope 내에 local variable 생성 
	// -> 해당 scope를 벗어나면 사라짐
	{	// copy constructor 호출됨
		// hello의 m_data와 copy의 m_data는 다른 memory address를 가리킨다
		// scpoe 내에서 copy constructor가 호출되기 때문에 new가 1번 호출된다.
		// scope를 벗어날 땐 delete가 1번 호출된다.
		MyString copy = hello; // copy constructor 호출 & new 호출 O
		cout << (int*)copy.m_data << endl; // 00A50408
		cout << copy.getString() << endl; // Hello
	} // delete 호출 O
	  
	// copy변수가 delete 되면서 copy 변수 사라짐. hello는 영향 x
	cout << hello.getString() << endl; // Hello로 출력됨


	return 0;
}
