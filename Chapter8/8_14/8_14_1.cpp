#include <iostream>
/* Nested types (class 안에 포함된 자료형) */
using namespace std;

enum FruitType
{
	APPLE,
	BANANA,
	CHERRY,	
};

class Fruit
{
private:
	FruitType m_type;
public:
	Fruit(FruitType type)
		: m_type(type)
	{
	
	}

	FruitType getType()
	{
		return m_type;
	}

};

int main()
{
	Fruit apple(APPLE);

	if (apple.getType == APPLE)
	{
		cout << "Apple" << endl;
	}

	return 0;
}
