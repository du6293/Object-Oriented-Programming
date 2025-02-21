#include <iostream>
/* Defensive Programming (����� ���α׷���) 
	������ �ִٸ� �����Ϸ��� �̸� ������ ���� �� �ֵ��� �����ϴ� ���� ����.
	���α׷����� ����� ���α׷��� ���� ������ġ�� �־�� �Ѵ�. 
*/
using namespace std;

int main()
{
	// syntax error: ���� ��Ģ ������ �������� �Ұ����� ����
	// semantic error: ������ ������ �ǵ��� ���۰� �ٸ��� ����Ǵ� ����
	int x;
	cin >> x;

	if (x >= 5)
	{
		cout << "x is greater than 5 " << endl;
	}

	// violated assumption: �ڵ尡 Ư�� assumption�� ������� �ۼ��Ǿ��µ� �װ� ���� ���
	string hello = "Hello, my name is Jack Jack";

	cout << "Input from 0 to " << hello.size() - 1 << endl;
	while (true)
	{
		int ix;
		cin >> ix;

		if (ix >= 0 && ix <= hello.size() - 1)
		{
			cout << hello[ix] << endl;
			break;
		}
		else
			cout << "Please try again " << endl;
	}
	return 0;
}
