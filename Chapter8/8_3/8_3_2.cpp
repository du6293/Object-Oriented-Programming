#include <iostream>
/* Constructor (������) 
	- instance�� construct �� �� �ڵ����� ȣ��Ǵ� �Լ��̴�.
	- constructor�� ������ instance ������ ���� ���ϱ� ������
	  class �� ������ constructor�� ����Ǿ� ���� �ʾƵ� compiler��
	  �ڵ����� default constructor�� ������ش�.
	- constructor �Լ��� �Ķ���Ͱ� �ƹ��͵� ���� 
	  default constructor�� ��쿡�� ()�� ���� ��
	- constructor �Լ��� �Ķ���Ͱ� �ִٸ� 
	  firó�� ��ȣ�� ���� �����ϸ� ���� �߻�
	- uniform initialization�� main ������ class�� ������ ��
	  private ������ �ִ� �������� type ��ȯ�� ������� �ʴ´�.
	- direct initialization�� main ������ class�� ������ ��
	  private ������ �ִ� �������� type ��ȯ�� ����Ѵ�.

*/
using namespace std;

class Second
{
public:
	// Constructor
	Second()
	{
		cout << "Class Second constructor() " << endl;
	}
};


class First
{
	// class ���ο� class ����
	Second sec; // Second class�� First class�� ����̴�.
public:
	First()
	{
		cout << "Class First constructor() " << endl;
	}
};

int main()
{	
	First fir; // second�� ���� �����ǰ� �� ���� first �� ������

	return 0;
}
