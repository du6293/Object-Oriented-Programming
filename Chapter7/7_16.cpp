#include <iostream>
#include <cstdarg> // for ellipsis
/* 생략부호 Ellipsis (...)
	디버깅이 어렵고 사용하기 위험하다는 단점
*/
using namespace std;

// count 갯수만큼 평균을 구함
// 파라미터 갯수는 몇 개가 되든 상관 없음
double findAverage(int count, ...)
{
	double sum = 0;
	va_list list;

	va_start(list, count);

	for (int arg = 0; arg < count; ++arg)
	{
		sum += va_arg(list, int); // integer로 변환
	}
	va_end(list);

	return sum / count;
}

int main()
{
	cout << findAverage(1, 1, 2, 3, "Hello", 'c') << endl;
	cout << findAverage(3,1,2,3) << endl;
	cout << findAverage(5,1,2,3,4,5) << endl;
	cout << findAverage(10,1,2,3,4,5) << endl;

	return 0;
}
