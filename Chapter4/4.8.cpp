#include <iostream>

/* 
	영역 제한 열거형 (열거형 클래스)
	Scoped Enumerations (Enum Class): enum의 단점을 보완해주는 역할
	enum class: type이 강하게 구분되므로 서로 다른 enum class type 끼리 비교 불가능하다.
	동일한 enum class내에서만 비교해야 한다. 
*/

int main()
{
	using namespace std;

	enum Color
	{
		RED,
		BLUE,
	};

	enum Fruit
	{
		BANANA,
		APPLE,
	};

	Color color1 = Color::RED;
	Color color2 = Color::BLUE;
	Fruit fruit = Fruit::BANANA;

	// 같은 enum class내 에서는 값의 비교가 가능하다
	if (color1 == color2)
	{
		cout << "Same color! " << endl;
	}

	// 다른 enum class간에는 값의 비교가 불가능하다
	// 명시적 type casting으로 값을 강제변환 해야 한다.
	if (static_cast<int>(color1) == static_cast<int>(fruit))
	{
		cout << "Same value! " << endl;
	}

	return 0;
}
