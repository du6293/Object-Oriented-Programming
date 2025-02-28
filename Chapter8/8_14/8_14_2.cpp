#include <iostream>
/* Nested types (class 안에 포함된 자료형) 
	여러 class가 공통적으로 사용하는 data type이면 바깥으로 빼서 header file을 만들어 주는 게 좋다.
	하지만 여러 class가 공통적으로 사용하는 data type일 경우 class 안에 임시로 사용하도록 만들어 주는 게 좋다.

*/
using namespace std;

class Fruit
{
public:
enum class FruitType
{
	APPLE,
	BANANA,
	CHERRY,
};

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
	Fruit apple(Fruit::FruitType::APPLE);

	if (apple.getType == Fruit::FruitType::APPLE)
	{
		cout << "Apple" << endl;
	}

	return 0;
}
