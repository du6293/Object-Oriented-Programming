#include <iostream>

using namespace std;

/*
 �Լ��� parameter�� array�� �־��� �� �ִ�. 
 �� �� parameter �ڸ��� �� �ִ� students_scores�� 
 array�� �ƴ϶� "������"�̴�.
 ���� �迭�� ��� ���Ҹ� �����ؼ� �������� ���� �ƴ϶�
 �迭�� "ù��° �ּҰ�"�� �����ϴ� ""������ ����" �̹Ƿ� ��°��� �ٸ��� memory size�� �ٸ���. 
 */
void doSomething(int students_scores[])
{
	// �迭�� ù��° element�� �ּҰ��� �����ϴ� ������ �ּҰ�
	cout << (int)&students_scores << endl; // 716567872

	// ù��° element�� �ּ�
	cout << (int)&students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;

	// x86������ ������ ������ size�� 4bytes, x64������ ������ ������ size�� 8bytes(memory address size�� �� ���.)
	cout << "Size in doSomething " << sizeof(students_scores) << endl; // 4bytes

}


int main()
{
	const int num_students = 20;
	// �ٷ� array�� �����
	// �̸� ��ü�� ù��° element�� "�ּ�"�̴�.
	int students_scores[num_students] = {1,2,3,4,5,};

	// ù��° element�� �ּ�
	cout << (int)&students_scores << endl; // 716567952
	// ù��° element�� �ּ�
	cout << (int)&(students_scores[0]) << endl;
	cout << (int)&(students_scores[1]) << endl;
	cout << (int)&(students_scores[2]) << endl;
	cout << (int)&(students_scores[3]) << endl;

	cout << "Size in main " << sizeof(students_scores) << endl; // 4bytes * 20 = 80bytes
	cout << endl;

	doSomething(students_scores);

	return 0;
}
