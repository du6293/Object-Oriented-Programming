#include <iostream>
#include <string>
#include <vector>

/* ��ü���� ���α׷��ְ� Ŭ���� 
	�Ϲ������� data�� ���� �� structure�� ����ϰ� 
	����� ���� ������ class�� �����
	object: ���� �ִ� data�� function�� ����� �ִ� ���
*/

using namespace std;

// structure�� class�� ���� �ٸ���. 
class Friend
{
public: // access specifier (���� ������)
	// ���� member ���������� ������ m_�� �߰���
	// �� �� Ȥ�� �� �ڿ� _ ����
	string	m_name;
	string	m_address;
	int		m_age;
	double	m_height;
	double	m_weight;

	// �Լ��� class ���η� �� �� �ִ�.
	void print()
	{
		cout << m_name << " " << m_address << " " << m_age << " "
			<< m_height << " " << m_weight << endl;
	}
};

// Friend: name, address, age, height, weight, ... 
int main()
{
	// instanciation: ��ü�� memory ������ �ڸ��� ��� �ϴ� ��
	// instance: Ŭ���� ����. ǥ���ϰ��� �ϴ� obejct
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
