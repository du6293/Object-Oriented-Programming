#include <iostream>
/* C언어 스타일의 문자열 심볼릭 상수 
	c++ compiler는 문자열 리터럴이 중복되면 메모리를 절약하기 위해 하나의 리터럴만 저장하고 공유한다.
 	문자열 리터럴의 경우 static 영역에 저장된다. -> 여러 번 사용하면 동일한 memory address를 공유할 수 있다.
*/
using namespace std;

// const 포인터변수 는 함수의 리턴형으로 사용 가능하다. 
const char* getName()
{
	return "Jack Jack"; // "Jack Jack은 문자열 리터럴"
}


int main()
{
	// const가 앞에 붙으면 포인터 변수가 문자열 리터럴을 가리킬 수 있다.
	//const char *name = "Jack Jack"; // 리터럴의 시작 주소를 가리키는 포인터 변수
	//const char *name2 = "Jack Jack";
	const char* name = getName();
	const char* name2 = getName();

	// 컴파일러가 두 리터럴 변수의 내용이 같으므로 같은 메모리 주소를 사용하도록 함
	// getName()이 호출될 때마다 동일한 리터럴(=동일한 memory address)을 가리키는 포인터를 반환
	cout << (uintptr_t)name << endl; // uintptr_t: 포인터값을 정수형 주소값으로 변환해서 출력
	cout << (uintptr_t)name2 << endl;


	return 0;
}
