#include <iostream>
#include <limits> 

/*
\n�� �ܼ��� �ٹٲ�
endl�� �ٹٲް� ���ÿ� ���� �ȿ� �ִ� �����͸� ��� ���
std::flush�� �ٹٲ��� ���� �ʰ� ���ۿ� �ִ� ������ ��� flush 
*/

int main(){
	
	using namespace std;

	char c1 = 65 ;
	cout << sizeof(unsigned char) << endl; // 1 byte
	cout <<(int)std::numeric_limits<unsigned char>::max() << endl;
	cout <<(int)std::numeric_limits<unsigned char>::lowest() << endl;
	cout << int('\n') << endl;
	cout << "This is first line \nsecond line"<< endl;
	cout << "This is first line \tsecond line"<< endl;
	cout << "This is first line \tsecond line\""<< endl;
	cout << "This is first line \asecond line\""<< endl;
	return 0;
}
