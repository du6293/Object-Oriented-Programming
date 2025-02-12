#include <iostream>
#include <bitset>

// 정보의 최소 단위 : 1 bit
// byte : 8 bit 

int main()
{
	using namespace std;
	
	int j = 3;
	int i = -1;
	int k = 123;
	
	char a = 'H';
	
	cout << (uintptr_t)static_cast<void*>(&a) << endl;
	cout << (uintptr_t)static_cast<void*>(&i) << endl;
	
	return 0;
} 
