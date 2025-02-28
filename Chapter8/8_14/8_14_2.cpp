#include <iostream>
/* Nested types (class �ȿ� ���Ե� �ڷ���) 
	���� class�� ���������� ����ϴ� data type�̸� �ٱ����� ���� header file�� ����� �ִ� �� ����.
	������ ���� class�� ���������� ����ϴ� data type�� ��� class �ȿ� �ӽ÷� ����ϵ��� ����� �ִ� �� ����.

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
