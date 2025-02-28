#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

/* 실행시간 측정하기
	실제로 코드를 배포할 땐 release mode에서 실행 시간을 측정해야 한다.
	debug mode로 측정하면 release mode에서보다 느리게 측정된다.

	많은 요소에 따라 측정 결과가 달라지므로 3번 정도 시간을 측정해야 한다.
	virus 프로그램, 음악 프로그램을 동시에 실행하는 경우, 
	멀티스레딩을 사용하는 경우에 따라 시간 측정이 달라진다.
	똑같은 코드를 여러 번 돌리면 cache에 들어가서 더 빨라지는 경우도 있다.
*/
using namespace std;

class Timer
{
	using clock_t = chrono::high_resolution_clock;
	using second_t = chrono::duration<double, ratio<1>>;
	// class 생성되면 현재 시간 측정 = start time
	chrono::time_point<clock_t> start_time = clock_t::now();

public:
	void elapsed()
	{
		// elapsed() 호출되면 현재 시간 측정 = end time
		chrono::time_point<clock_t> end_time = clock_t::now();
		cout << chrono::duration_cast<second_t> (end_time - start_time).count() << endl;
	}
};

int main()
{
	random_device rnd_device;
	// random number generator
	mt19937 mersenne_engine{ rnd_device() };

	vector<int> vec(100000);

	for (unsigned int i = 0; i < vec.size(); ++i) 
	{
		vec[i] = i;
	}

	// 순서 섞음
	shuffle(begin(vec), end(vec), mersenne_engine);
	/*
	for (auto& e : vec)
		cout << e << " ";
	cout << endl;
	*/
	// start measure time
	Timer timer;

	sort(begin(vec), end(vec));
	// 걸린 시간 측정
	timer.elapsed();
	/*
	// 결과 확인
	for (auto& e : vec)
		cout << e << " ";
	cout << endl;
	*/
	return 0;
}
