#include <iostream>
#include <string>
#include <limits>

using namespace std;

/*
	���ڿ� ���� ���������� �� �����ִ�.
*/
int main()
{
	// array: �� ���ڸ� ���� �� �����ϴ� ���
	const char my_strs [] = "Hello, World";
	// string: ����� ���� �ڷ���, �迭���� ���� ���
	const string my_hello("Hello, World");

	string my_ID = "123"; // int�� string���� �Ͻ��� ����ȯ�ϴ� ����� ����. 
	cout << my_hello << endl;
	cout << endl;


	cout << "Your age?: ";
	int age;
	// 1. �Է� �� space bar�� �ѹ� �Է��ϸ� �Է��� ���� ��
	cin >> age;
	// 2. line ������ �Է��� ����(space ������ ��� x)
	// std::getline(std::cin, age);

	// �Է¹��� 32767���� ���ڸ� �����϶�� ��
	// std::cin.ignore(32767, '\n');
	// streamsize = buffer size
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	
	cout << "Your name?: " ;
	string name;
	// 1. �Է� �� space bar�� �ѹ� �Է��ϸ� ���ۿ� �Է��� ���� ��
	//cin >> name;
	// 2. line ������ �Է��� ����(space ������ ��� x)
	std::getline(std::cin, name);

	cout << name << " " << age << endl;

	return 0;
}