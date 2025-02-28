#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>

/* ����ð� �����ϱ�
	������ �ڵ带 ������ �� release mode���� ���� �ð��� �����ؾ� �Ѵ�.
	debug mode�� �����ϸ� release mode�������� ������ �����ȴ�.

	���� ��ҿ� ���� ���� ����� �޶����Ƿ� 3�� ���� �ð��� �����ؾ� �Ѵ�.
	virus ���α׷�, ���� ���α׷��� ���ÿ� �����ϴ� ���, 
	��Ƽ�������� ����ϴ� ��쿡 ���� �ð� ������ �޶�����.
	�Ȱ��� �ڵ带 ���� �� ������ cache�� ���� �� �������� ��쵵 �ִ�.
*/
using namespace std;

class Timer
{
	using clock_t = chrono::high_resolution_clock;
	using second_t = chrono::duration<double, ratio<1>>;
	// class �����Ǹ� ���� �ð� ���� = start time
	chrono::time_point<clock_t> start_time = clock_t::now();

public:
	void elapsed()
	{
		// elapsed() ȣ��Ǹ� ���� �ð� ���� = end time
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

	// ���� ����
	shuffle(begin(vec), end(vec), mersenne_engine);
	/*
	for (auto& e : vec)
		cout << e << " ";
	cout << endl;
	*/
	// start measure time
	Timer timer;

	sort(begin(vec), end(vec));
	// �ɸ� �ð� ����
	timer.elapsed();
	/*
	// ��� Ȯ��
	for (auto& e : vec)
		cout << e << " ";
	cout << endl;
	*/
	return 0;
}
