#include <iostream>

/* 상속의 기본 (1) */
using namespace std;

// Generalized class = 부모 class, 일반화 된 class
class Mother
{
//private: // 외부에서 접근 불가
//public:  // 외부에서 모두 접근 가능
protected: // private 상태를 유지하면서 자식 class에서는 접근 가능하다.
	int m_i;
public:

	// constructor
	// 임의로 constructor를 만들어 주었기 때문에 default constructor 사라짐
	Mother(const int& i_in)
		: m_i(i_in)
	{
		cout << "Mother constructor" << endl;
	}
	
	/*
	// default constructor를 사용하는 방법도 많이 사용함
	Mother()
		: m_i(0)
	{
	
	}
	*/
	
	void setValue(const int& i_in)
	{
		m_i = i_in;
	}
	int getValue()
	{
		return m_i;
	}
};

// Child class는 Mother class 를 상속받는다. 
// 이 때 Mother class에 있는 모든 기능들을 사용할 수 있다.
// Child class를 만드는 이유: Mother class의 member variable과 Child class의 member variable을 동시에 사용하는 것
class Child : public Mother
{
private:
	double m_d;
public:
	// constructor
	// const: memory가 할당됨과 동시에 값을 할당하는 것
	// memory를 할당하고 나서 그 address에 값을 copy하는 게 아님
	// child class의 constructor가 호출되기 전 mother class의 constructor를 먼저 호출함 
	Child(const int& i_in, const double& d_in)
		: Mother(i_in), m_d(d_in) // 생성자를 initialization list로 넣어줌
	//	: m_i(i_in), m_d(d_in)
	{
		//Mother::setValue(i_in);
		//m_d = d_in;
	}

	void setValue(const int & i_in, const double & d_in) // 자식 class의 setValue method
	{
		Mother::setValue(i_in); // 부모 class의 method 호출
		m_d = d_in;
	}
	void setValue(const double& d_in)
	{
		m_i = d_in;
	}

	double getValue()
	{
		return m_d;
	}
};

// Derived class = Mother class로 부터 많은 class를 유도해낼 수 있다.
class Daughter : public Mother
{

};

class Son : public Mother
{

};

int main()
{
	Mother mother;
	//Mother mother(1024);
	//mother.setValue(1024);
	cout << mother.getValue() << endl; // 1024

	Child child(1024, 128);
	/*child.Mother::setValue(1024);
	child.setValue(128); */
	cout << child.Mother::getValue() << endl; // 1024
	cout << child.getValue() << endl; //128

	return 0;
}
