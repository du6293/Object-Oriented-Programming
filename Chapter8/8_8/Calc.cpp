#include "Calc.h"

using namespace std;

/* class �ȿ� member function�� ���� ��� ������� ���,
   compiler�� �̸� inline�ϰ� �ʹٰ� ������
*/

/*
inline Calc::Calc(int init_value)
	: _value(init_value)
{

}
inline Calc& Calc::add(int value)
{
	_value += value;
	return *this;
}
inline Calc& Calc::sub(int value)
{
	_value -= value;
	return *this;
}
inline Calc& Calc::mul(int value)
{
	_value *= value;
	return *this;
}
inline void Calc::print()
{
	std::cout << _value << std::endl;
}
*/

inline Calc::Calc(int init_value)
	: _value(init_value)
{

}

Calc& Calc::add(int value)
{
	_value += value;
	return *this;
}
Calc& Calc::sub(int value)
{
	_value -= value;
	return *this;
}
Calc& Calc::mul(int value)
{
	_value *= value;
	return *this;
}

void Calc::print()
{
	std::cout << _value << std::endl;
}

