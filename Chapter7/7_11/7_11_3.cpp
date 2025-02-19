#include <iostream>
#include <vector>

/* std::vector�� stackó�� ����ϱ� 
	vector�� stack���� ����ϴ� ����?
	reserve()�� �̸� capacity�� �Ҵ��صθ� push, pop�� ����
	��, capacity�� �̸� �ʹ� ũ�� ������ ���� ����
*/

using namespace std;

void printStack(const vector<int>& stack)
{
	for (auto& e : stack)
	{
		cout << e << " ";
	}
	cout << endl;
}


int main()
{
	vector<int> stack;

	stack.reserve(1024); // �̸� capacity Ȯ��

	stack.push_back(3);
	printStack(stack);

	stack.push_back(5);
	printStack(stack);

	stack.push_back(7);
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	return 0;
}
