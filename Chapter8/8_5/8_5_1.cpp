#include <iostream>
#include <string>
/* 
	Delegating Constructors (위임 생성자)
	특정 생성자가 다른 생성자를 사용하는 것 
*/

using namespace std;

/*
	특정 기능을 하는 코드는 한 곳에서만 나와야 한다.
	_name에 값을 대입하는 코드는 여러 line이 아니라 한 line에서만 일어나야 한다.
*/

class Student
{
private:
	int			_id;
	string		_name;

public:
	// Construct 1과 Construct2 모두 member variable을 초기화하고 있기 때문에
	// 각 Construct에서 서로를 가져다 쓸 수 있다.
	// Construct 1
	Student(const string& name_in)
		//: _id(0), _name(name_in)
		: Student(0, name_in) // Construct1에서 Construct2를 가져다 쓰고 있음
	{
		
	}
	// Construct 2
	Student(const int& id_in, const string& name_in)
		: _id(id_in), _name(name_in)
	{
		
	}

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
