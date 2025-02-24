#include <iostream>
#include "Calc.h"

/* class code¿Í header file */
using namespace std;

int main()
{
	Calc cal(10);
	cal.add(10).sub(1).mul(2).print();

	return 0;
}
