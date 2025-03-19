#include <iostream>
#include <string>

/* Child class의 객체에 Parent class의 pointer를 사용하는 경우 */
using namespace std;

class Animal
{
protected:
	string m_name;
public:
	Animal(std::string name)
		: m_name(name)
	{}

public:
	string getName()
	{
		return m_name;
	}

	void speak() const
	{
		cout << m_name << " ??? " << endl;
	}
};

class Cat : public Animal
{
public:
	Cat(string name)
		: Animal(name)
	{}

	void speak() const
	{
		cout << m_name << " Meow " << endl;
	}
};

class Dog :public Animal
{
public:
	Dog(string name)
		: Animal(name)
	{}

	void speak() const
	{
		cout << m_name << " Woof " << endl;
	}
};

int main()
{
	Cat cats[] = { Cat("cat1"), Cat("cat2"), Cat("cat3"), Cat("cat4"), Cat("cat5") };
	Dog dogs[] = { Dog("dog1"), Dog("dog2") };

	for (int i = 0; i < 5; ++i)
		cats[i].speak();

	for (int i = 0; i < 2; ++i)
		dogs[i].speak();

	// Cat와 Dog는 Animal class로부터 상속받는 class이므로 
	// 모두 casting이 가능하다.
	Animal* my_animals[] = {&cats[0], &cats[1], &cats[2], &cats[3], &cats[4],
							&dogs[0], &dogs[1]};
	// for문 1개로 7개의 객체 동시에 부모 class의 speak() 호출하도록 함
	for (int i = 0; i < 7; ++i)
		my_animals[i]->speak();

	return 0;
}
