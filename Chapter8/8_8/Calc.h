#pragma once

#include <iostream>


/*  ���� header file�� �̸��� class �̸��� �����ϰ� ���´�.
	.h ���Ͽ����� include �ϴ� �͵��� ���� ������ �ޱ� ������
	using name space ����� �����Ѵ�.
	.cpp ������ using name space ����ص� �����ϴ�.

	Calc.h���� Calc.cpp�� �Լ� body�� �ű�� 
	Calc.h���� prototype�� ���ܵ� ������ 
	�Լ��� ��Ŭ�� -> Quick actions and Refactorings -> Move Definition Location

	�̷��� �ϸ� header file(Calc.h)���� prototype�� ���� �ȴ�.
	Calc.c���� function body�� ��� �ִ�.
*/

class Calc
{
private:
	int _value;

public:
	Calc(int init_value);

	Calc& add(int value);
	Calc& sub(int value);
	Calc& mul(int value);

	void print();
};
