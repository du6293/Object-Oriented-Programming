#include <iostream>
/* C언어 스타일의 문자열 심볼릭 상수 */
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
	// getName()이 호출될 때마다 동일한 리터럴을 가리키는 포인터를 반
	cout << (uintptr_t)name << endl; // uintptr_t: 포인터값을 정수형 주소값으로 변환해서 출력
	cout << (uintptr_t)name2 << endl;


	return 0;
}
