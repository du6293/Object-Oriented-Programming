#include <iostream>

/*
	sorting: 순서를 맞춰주는 것
	selection sort: 선택 정렬
	기준 인덱스보다 작은 element의 인덱스와 자리를 교환
	기준 인덱스를 점차 증가시킴
*/

using namespace std;

void printArray(const int array[], const int length)
{
	for (int index = 0; index < length; ++index)
	{
		cout << array[index] << " ";
	}
	cout << endl;
}

int main()
{
	/*				value	index
	3 5 2 1 4		1		3
	1 5 2 3 4		2		2
	1 2 5 3 4		3		3
	1 2 3 5 4		4		4
	1 2 3 4 5		
	*/

	const int length = 5;

	int array[length] = { 3,5,2,1,4 };
	printArray(array, length);
	
	/* Swap */
	// std::swap() 함수 사용 가능
	int temp = array[0];
	array[0] = array[1];
	array[1] = temp;

	printArray(array, length);
	
	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		int smallestIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (array[smallestIndex] > array[currentIndex])
			{
				smallestIndex = currentIndex;
			}
		}

		// swap two values in the array
		// std::swap(array[smallestIndex], array[startIndex]);
		{
			int temp = array[smallestIndex];
			array[smallestIndex] = array[startIndex];
			array[startIndex] = temp;
		}
		printArray(array, length);
	}
		
	return 0;
}
