#include <iostream>
#include <string>

/* Child class�� ��ü�� Parent class�� pointer�� ����ϴ� ��� */
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
	Animal animal("my animal");
	Cat cat("my cat");
	Dog dog("my dog");

	animal.speak();
	cat.speak();
	dog.speak();
	
	// child class ��ü�� �θ� class pointer�� �־  
	// �θ� class�� pointer�� ȣ���ϸ� �θ� classó�� �����Ѵ�.
	Animal* ptr_animal1 = &cat;
	Animal* ptr_animal2 = &dog;

	ptr_animal1 -> speak();
	ptr_animal2 -> speak();

	return 0;
}
