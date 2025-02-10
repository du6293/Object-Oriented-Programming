/*전처리기(header guard)*/
/*
	#pragma once 한 줄은  
	#ifndef
	#define
	...
	#endif
	와 같다. 
	
	헤더파일에는 #pragma once를 무조건 넣는다고 생각하기!  
*/
#pragma once


//#ifndef MY_CAL
//#define MY_CAL

int add (int a, int b)
{
	return a + b;

}


int mul(int a, int b)
{
	return a * b;
}


int sub(int a, int b)
{
	return a - b;
}


//#endif
