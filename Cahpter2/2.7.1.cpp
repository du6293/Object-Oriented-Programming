#include <iostream>
#include <limits> 

/*
\n은 단순히 줄바꿈
endl은 줄바꿈과 동시에 버퍼 안에 있는 데이터를 모두 출력
std::flush는 줄바꿈을 하지 않고 버퍼에 있는 내용을 모두 flush 
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
