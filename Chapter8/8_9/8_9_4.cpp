#include <iostream>
#include <string>
/* class�� const 
	class �� �Լ� �� const�� �ٿ��� ���� �� �ִ� �Լ��� �ִٸ� 
	�����ϸ� �� const�� �ٿ��δ� �� ����. ������� ���� �� �ִ�.
	const string& getValue() const ó�� 
	member variable�� const�� ����� return type�� const�� ������ִ� ���¸� ���� ����Ѵ�. 
	class �� member function�� const�� �ȴٴ� ���� member function �� 
	member variable ���� �ٲ��� �ʰڴٴ� ���̴�. 

	reference ���� ������ const ������ ���� ������� �޶�����.
	��,const�� ����(const, non-const)�� overloading�� ������ �� �ִ�.

*/
using namespace std;

class Something
{
public:
	string _value = "default";
	
	/* const overloading */
	const string& getValue() const
	{
		cout << "const version " << endl;
		return _value; // const reference �� return
						// ���� ���� �ٲ��� �� ����.
	}

	string& getValue()
	{
		cout << "non-const version " << endl;
		return _value; // non-const reference�� return 
						// ���� ���� �ٲ��� �� �ִ�.
	}
};


int main()
{
	// something ��ü�� non-const�̹Ƿ� class �� string& getValue() ȣ��
	Something something;
	something.getValue() = 10;

	// something2�� const�̹Ƿ� class �� const string& getValue() ȣ��
	const Something something2;
	something2.getValue();
	//something2.getValue() = 100; // �� ���ٲ�

	return 0;
}
