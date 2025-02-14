#include <iostream>
using namespace std;

/*
	���� ������ �迭(multi-dimensional array)
*/
int main()
{
	const int num_rows = 3;
	const int num_columns = 5;
	/* 3���� �迭 */
	int array[5][4][3];

	/* 2���� �迭 */
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
			// 2���� �迭������ memory address�� ���� 1�����̴�.
			//cout << (int)&array[row][col] << '\t';
		}
		cout << endl;
	}
	cout << endl;


	return 0;
}
