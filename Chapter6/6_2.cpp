#include <iostream>

using namespace std;

/*
 함수의 parameter로 array를 넣어줄 수 있다. 
 이 때 parameter 자리로 들어가 있는 students_scores는 
 array가 아니라 "포인터"이다.
 따라서 배열의 모든 원소를 복사해서 가져오는 것이 아니라
 배열의 "첫번째 주소값"을 저장하는 ""포인터 변수" 이므로 출력값도 다르고 memory size도 다르다. 
 */
void doSomething(int students_scores[])
{
	// 배열의 첫번째 element의 주소값을 저장하는 변수의 주소값
	cout << (int)&students_scores << endl; // 716567872

	// 첫번째 element의 주소
	cout << (int)&students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;

	// x86에서는 포인터 변수의 size가 4bytes, x64에서는 포인터 변수의 size가 8bytes(memory address size가 더 길다.)
	cout << "Size in doSomething " << sizeof(students_scores) << endl; // 4bytes

}


int main()
{
	const int num_students = 20;
	// 바로 array로 선언됨
	// 이름 자체가 첫번째 element의 "주소"이다.
	int students_scores[num_students] = {1,2,3,4,5,};

	// 첫번째 element의 주소
	cout << (int)&students_scores << endl; // 716567952
	// 첫번째 element의 주소
	cout << (int)&(students_scores[0]) << endl;
	cout << (int)&(students_scores[1]) << endl;
	cout << (int)&(students_scores[2]) << endl;
	cout << (int)&(students_scores[3]) << endl;

	cout << "Size in main " << sizeof(students_scores) << endl; // 4bytes * 20 = 80bytes
	cout << endl;

	doSomething(students_scores);

	return 0;
}
