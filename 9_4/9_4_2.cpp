#include <iostream>
#include <vector>
#include <algorithm>

/* 비교 연산자(==, !=, >, >=) 오버로딩 하기 */
using namespace std;


class Cents
{
private:
	int m_cents;
public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	// << 연산자 overloading 추가
	friend std::ostream& operator<<(std::ostream& out, const Cents& cents)
	{
		out << cents.m_cents;
		return out;
	}
	
	friend bool operator == (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents == c2.m_cents;
	}

	friend bool operator != (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents != c2.m_cents;
	}

	friend bool operator > (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents > c2.m_cents;
	}

	friend bool operator < (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents < c2.m_cents;
	}

};


int main()
{

	vector<Cents> arr(20);
	for (unsigned i = 0; i < 20; ++i)
		arr[i].getCents() = i;

	// 섞기
	random_shuffle(arr.begin(), arr.end());
	
	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	// 정렬하기 -> Cent 내 member variable 간 크기 비교가 불가능하다
	// 크기 비교 연산자(<, >) overloading 해야 한다.
	sort(arr.begin(), arr.end());

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	return 0;
}
