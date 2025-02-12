#include <iostream>

using namespace std;


struct Employee		// 14 bytes -> 16 bytes
{
	short	id;		// 2 bytes
	int		age;	// 4 bytes
	double	wage;	// 8 bytes
};

int main()
{
	Employee emp1;
	// sizeof()는 structure의 size를 잴 때도 사용가능하다.
	// 2 + (2 - padding) + 4 + 8 = 16 bytes
	cout << sizeof(Employee) << endl; // 14 bytes가 아닌 16 bytes로 출력됨

	return 0;
}
