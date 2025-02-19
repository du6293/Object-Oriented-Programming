#include <iostream>
#include <vector>

/* std::vector를 stack처럼 사용하기 
	vector를 stack으로 사용하는 이유?
	reserve()로 미리 capacity를 할당해두면 push, pop에 용이
	단, capacity를 미리 너무 크게 잡으면 좋지 않음
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

	stack.reserve(1024); // 미리 capacity 확보

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
