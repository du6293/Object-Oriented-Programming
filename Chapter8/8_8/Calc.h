#pragma once

#include <iostream>


/*  보통 header file의 이름은 class 이름과 동일하게 짓는다.
	.h 파일에서는 include 하는 것들이 전부 영향을 받기 때문에
	using name space 사용을 지양한다.
	.cpp 파일은 using name space 사용해도 무방하다.

	Calc.h에서 Calc.cpp로 함수 body를 옮기고 
	Calc.h에는 prototype만 남겨둘 때에는 
	함수명 우클릭 -> Quick actions and Refactorings -> Move Definition Location

	이렇게 하면 header file(Calc.h)에는 prototype만 남게 된다.
	Calc.c에는 function body가 들어 있다.
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
