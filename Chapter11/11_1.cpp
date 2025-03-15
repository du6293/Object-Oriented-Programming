#include <iostream>

/* ����� �⺻ (1) */
using namespace std;

// Generalized class = �θ� class, �Ϲ�ȭ �� class
class Mother
{
//private: // �ܺο��� ���� �Ұ�
//public:  // �ܺο��� ��� ���� ����
protected: // private ���¸� �����ϸ鼭 �ڽ� class������ ���� �����ϴ�.
	int m_i;
public:

	// constructor
	// ���Ƿ� constructor�� ����� �־��� ������ default constructor �����
	Mother(const int& i_in)
		: m_i(i_in)
	{
		cout << "Mother constructor" << endl;
	}
	
	/*
	// default constructor�� ����ϴ� ����� ���� �����
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

// Child class�� Mother class �� ��ӹ޴´�. 
// �� �� Mother class�� �ִ� ��� ��ɵ��� ����� �� �ִ�.
// Child class�� ����� ����: Mother class�� member variable�� Child class�� member variable�� ���ÿ� ����ϴ� ��
class Child : public Mother
{
private:
	double m_d;
public:
	// constructor
	// const: memory�� �Ҵ�ʰ� ���ÿ� ���� �Ҵ��ϴ� ��
	// memory�� �Ҵ��ϰ� ���� �� address�� ���� copy�ϴ� �� �ƴ�
	// child class�� constructor�� ȣ��Ǳ� �� mother class�� constructor�� ���� ȣ���� 
	Child(const int& i_in, const double& d_in)
		: Mother(i_in), m_d(d_in) // �����ڸ� initialization list�� �־���
	//	: m_i(i_in), m_d(d_in)
	{
		//Mother::setValue(i_in);
		//m_d = d_in;
	}

	void setValue(const int & i_in, const double & d_in) // �ڽ� class�� setValue method
	{
		Mother::setValue(i_in); // �θ� class�� method ȣ��
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

// Derived class = Mother class�� ���� ���� class�� �����س� �� �ִ�.
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
