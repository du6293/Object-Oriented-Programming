#include <iostream>
#include <cassert> // assert.h
#include <array>

/* assert(�ܾ��ϱ�) 
	����� �� �����Ϸ��� ������ �޾Ƽ� ���α׷��� ������ ����� ���� �̸� �����ϴ� ���
	run-time�� ������ false�� ���α׷� ���� ���� �� ���� ���
	run-time�� ������ true�� ��� ���α׷� ����
	release ��忡���� ���α׷��� ������ ���� ������ assert ��� x

	static assert
	compile time�� �����Ǵ� ��쿡�� ������ �߻���Ŵ
	assert�� �޸� ������ �߰��� �� �ִ�.
*/
using namespace std;

int main()
{
	const int x = 10;
	
	assert(x == 5);

	static_assert(true, "x should be 5");


	return 0;
}
