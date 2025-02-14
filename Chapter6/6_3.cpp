#include <iostream>
using namespace std;


int main()
{
	//const int num_students = 5;
	//int scores[num_students] = { 84, 92, 76, 81, 56 };

	int scores[] = { 84, 92, 76, 81, 56 };

	// 주의: paramenter로 넘어간 array의 경우, 포인터 변수로 넘어가기 때문에 
	// 정확한 array의 길이를 구할 수 없다.
	// 이 경우 array 길이와 포인터 변수를 함께 함수의 parameter로 넘겨주어야 한다. 
	const int num_students = sizeof(scores) / sizeof(int);

	int total_score = 0;
	int max_score = 0;
	int min_score = scores[0];

	for (int i = 0; i < num_students; ++i)
	{
		total_score += scores[i];
		max_score = (max_score <scores[i]) ? scores[i] : max_score;
		min_score = (min_score > scores[i]) ? scores[i] : min_score;
	}

	double avg_score = static_cast<double>(total_score) / num_students;
	cout << max_score << " " << min_score << endl;

	return 0;
}
