#include <iostream>
#include <array>
/* �پ��� return value�� (��, ����, �ּ�, ����ü, Ʃ��)*/
using namespace std;
/* Case3. return type�� structure�� �� 
���� ���� ���� return�ϰ� ���� �� �ַ� ����Ѵ�. 
�Լ� 1���� ���� ������ ����ü�� ����� �־�� �Ѵ�.
���� ���� overhead�� ũ��.
*/
struct S
{
	int a, b, c, d;

};

S getStruct() 
{
	S my_s{ 1,2,3,4 };

	return my_s;
}

int main()
{
	S my_s = getStruct();

	return 0;
}
