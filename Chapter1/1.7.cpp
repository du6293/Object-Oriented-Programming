#include <iostream>
// { }�ȿ� ����� ������ { } �� ����� �����  
// { }�� ������ ������ �������ִ� �� 

using namespace std;

// x �� ��� �ٸ� �����̴�. >> �ٸ� �޸� �ּҰ��� ���´�.  

int main()
{
	int x = 100;
	cout << x << " " << &x <<endl;
	
	
	
	{
		//int x = 2; 
		x = 2;  // ��ȣ �� ���� x�� memory address ���� 
		cout << x << " " << &x <<endl;
	}
	
	{
		int x = 5; 
		cout << x << " " << &x <<endl;
	}
	cout << x << " " << &x <<endl;

	return 0;
}
