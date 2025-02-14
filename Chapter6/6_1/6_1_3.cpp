#include <iostream>
// 정적할당: 권장하지 않는 방법
// 메모리 크기 동적 할당 권장
#define NUM_STUDENTS 100000

int main()
{
	using namespace std;

	/*
	int num_students = 0;
	cin >> num_students;	// run-time에 결정됨
	*/

	const int num_students = 5;
	//int students_scores[NUM_STUDENTS]; // compile-time에 length가 결정됨
	int students_scores[num_students];


	return 0;
}



