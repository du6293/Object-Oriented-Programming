#include <iostream>
#include <string>
/* 
	Delegating Constructors (���� ������)
	Ư�� �����ڰ� �ٸ� �����ڸ� ����ϴ� �� 
*/

using namespace std;

/*
	Ư�� ����� �ϴ� �ڵ�� �� �������� ���;� �Ѵ�.
	_name�� ���� �����ϴ� �ڵ�� ���� line�� �ƴ϶� �� line������ �Ͼ�� �Ѵ�.
*/

class Student
{
private:
	int			_id;
	string		_name;

public:
	// Construct 1�� Construct2 ��� member variable�� �ʱ�ȭ�ϰ� �ֱ� ������
	// �� Construct���� ���θ� ������ �� �� �ִ�.
	// Construct 1
	Student(const string& name_in)
		//: _id(0), _name(name_in)
		//: Student(0, name_in) // Construct1���� Construct2�� ������ ���� ����
	{
		init(0, name_in);
	}
	// Construct 2
	Student(const int& id_in, const string& name_in)
		//: _id(id_in), _name(name_in)
	{
		init(id_in, name_in);
	}

	void init(const int& id_in, const string& name_in)
	{
		_id		= id_in;
		_name	= name_in;
	}

	// ���� �����ڸ� ������� �ʰ�
	// Construct���� member variable�� �ʱ�ȭ�� �Լ��� ���� ����
	// �� �����ڿ��� �Լ��� ȣ���ϵ��� �ص� �ȴ�.
	void print()
	{
		cout << _id << " " << _name << endl;
	}
};

int main()
{
	Student st1(0, "Jack Jack");
	st1.print();

	Student st2("Dash");
	st2.print();
	return 0;
}
