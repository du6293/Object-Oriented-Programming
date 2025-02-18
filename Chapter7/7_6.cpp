#include <iostream>
/* �ζ��� �Լ�(Inline Functions) 
�Լ��� �ƴ� ��ó�� ������ 
�ڵ� ���� �� ��� �Լ��� �ζ������� �ٲ۴ٰ� �ؼ� �ڵ��� ���� �ӵ��� �������� ���� �ƴ�
���� compiler�� inline�� �����ϴ� ��, �������� �ʴ� �� �� ���� ���� ���������� �˾Ƽ� ������ �����Ѵ�.
*/
using namespace std;

inline int min(int x, int y)
{
	return x > y ? y : x;
}

int main()
{
	cout << min(5, 6) << endl;
	cout << min(3, 2) << endl;

	// inline�Լ��� ����ϸ� �� 2 line�� ������ ���� ������ �ȴ�. 
	cout << (5 > 6 ? 6 : 5) << endl;
	cout << (3 > 2 ? 2 : 3) << endl;
	return 0;
}
