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
	Animal animal("my animal");
	Cat cat("my cat");
	Dog dog("my dog");

	animal.speak();
	cat.speak();
	dog.speak();
	
	// child class 객체를 부모 class pointer에 넣어서  
	// 부모 class의 pointer를 호출하면 부모 class처럼 동작한다.
	Animal* ptr_animal1 = &cat;
	Animal* ptr_animal2 = &dog;

	ptr_animal1 -> speak();
	ptr_animal2 -> speak();

	return 0;
}
