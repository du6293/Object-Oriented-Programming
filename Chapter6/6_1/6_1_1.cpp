#include <iostream>

struct Rectangle	// 8 bytes
{
	int length;
	int width;
};


int main()
{
	using namespace std;

	cout << sizeof(Rectangle) << endl;

	// struct array 생성 가능
	Rectangle rect_arr[10];

	cout << sizeof(rect_arr) << endl; // 8 * 8 bytes

	rect_arr[0].length = 1;
	rect_arr[0].width = 2;

	return 0;
}



