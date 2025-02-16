#include <iostream>

/* 포인터와 참조의 멤버 선택 연산자(member selection operators) */
/* 
	포인터와 참조를 구조체나 클래스에 대해 사용할 때, 
	포인터와 참조를 통해 구조체나 클래스의 멤버에 접근할 수 있다. 
*/
using namespace std;

struct Person
{
	int age;
	double weight;
};

int main()
{
	Person person;

	person.age = 5;
	person.weight = 30;

	// ref == person
	Person &ref = person;
	ref.age = 15;
	ref.weight = 45;

	// ptr은 person을 가리키는 변수
	Person* ptr = &person;
	ptr->age = 30; // 포인터 변수는 -> 사용
	(*ptr).age = 20;

	// ref2 == *ptr == person
	Person &ref2 = *ptr;
	ref2.age = 45;

	// person, ref, ref2는 같은 memory address르 갖는다.
	cout << &person << endl;
	cout << &ref << endl;
	cout << &ref2 << endl;

	return 0;
}
