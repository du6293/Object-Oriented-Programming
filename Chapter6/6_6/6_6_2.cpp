#include <iostream>
using namespace std;


int main()
{
	char myString[255];

	// space bar �Է��ϸ� �Է� �� ���� ������ myString�� ���
	//cin >> myString;
	// sapce bar�� ���� ���� �ذ�
	cin.getline(myString, 255);
	// index 0 ����
	//myString[0] = 'A';
	 
	// index 4 ���ķ� ����� �ƿ� �ȵ�
	//myString[4] = '\0';

	// ����� null�� �ٸ���.
	// ���� �ƽ�Ű �ڵ�: 32
	int ix = 0;
	while (true)
	{
		if (myString[ix] == '\0')
		{
			break;
		}
		cout << myString[ix] << " " << (int)myString[ix] << endl;
		++ix;
	}
	
	cout << myString << endl;

	return 0;
}
