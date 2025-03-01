#include <iostream>
#include <vector>
#include <algorithm>

/* �� ������(==, !=, >, >=) �����ε� �ϱ� */
using namespace std;


class Cents
{
private:
	int m_cents;
public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	// << ������ overloading �߰�
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

	// ����
	random_shuffle(arr.begin(), arr.end());
	
	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	// �����ϱ� -> Cent �� member variable �� ũ�� �񱳰� �Ұ����ϴ�
	// ũ�� �� ������(<, >) overloading �ؾ� �Ѵ�.
	sort(arr.begin(), arr.end());

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	return 0;
}
