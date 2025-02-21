#include <iostream>
#include <string>
#include <vector>

/* 객체지향 프로그래밍과 클래스 
	일반적으로 data를 묶을 땐 structure를 사용하고 
	기능을 넣을 때에는 class를 사용함
	object: 묶여 있는 data와 function을 출력해 주는 기능
*/

using namespace std;

// structure와 class는 많이 다르다. 
class Friend
{
public: // access specifier (접근 지정자)
	// 보통 member 정석적으로 변수에 m_를 추가함
	// 맨 앞 혹은 맨 뒤에 _ 붙임
	string	m_name;
	string	m_address;
	int		m_age;
	double	m_height;
	double	m_weight;

	// 함수가 class 내부로 들어갈 수 있다.
	void print()
	{
		cout << m_name << " " << m_address << " " << m_age << " "
			<< m_height << " " << m_weight << endl;
	}
};

// Friend: name, address, age, height, weight, ... 
int main()
{
	// instanciation: 객체가 memory 공간에 자리를 잡게 하는 것
	// instance: 클래스 변수. 표현하고자 하는 obejct
	Friend jj{ "Jack jack", "Uptown", 2, 175, 50 };
	cout << &jj << endl;

	jj.print();

	vector<Friend> my_friends;
	my_friends.resize(2);

	for (auto &element : my_friends)
	{
		element.print();
	}

	return 0;
}
