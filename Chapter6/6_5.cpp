#include <iostream>
using namespace std;

/*
	정적 다차원 배열(multi-dimensional array)
*/
int main()
{
	const int num_rows = 3;
	const int num_columns = 5;
	/* 3차원 배열 */
	int array[5][4][3];

	/* 2차원 배열 */
	int array[num_rows][num_columns] = // row-major
	{
		{1,2,},		// row 0
		{6,7,8,9,10},		// row 1
		{11,12,13,14,15}	// row 2
	};

	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_columns; ++col)
		{
			//cout << "[" << row << "]" << "[" << col << "]" << '\t';
			cout << array[row][col] << '\t';
			// 2차원 배열이지만 memory address를 찍어보면 1차원이다.
			//cout << (int)&array[row][col] << '\t';
		}
		cout << endl;
	}
	cout << endl;


	return 0;
}
