#include <iostream>
/* Nested types (class �ȿ� ���Ե� �ڷ���) */
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
