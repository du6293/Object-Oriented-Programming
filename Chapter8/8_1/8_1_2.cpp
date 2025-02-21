#include <iostream>
#include <string>
#include <vector>

/* 객체지향 프로그래밍과 클래스 */

using namespace std;

struct Friend
{
	string	name;
	string	address;
	int		age;
	double	height;
	double	weight;

	// 함수가 structure 내부로 들어갈 수 있다. -> 객체(structure)와 기능(function)이 묶여 있음 = 객체지향 
	void print()
	{
		cout << name << " " << address << " " << age << " "
			<< height << " " << weight << endl;
	}
};




void print(const string& name, const string& address, const int& age,
	const double& height, const double& weight)
{
	cout << name << " " << address << " " << age << " " 
		<< height << " " << weight << endl;
}

// Friend: name, address, age, height, weight, ... 
int main()
{
	Friend jj{ "Jack jack", "Uptown", 2, 175, 50 };
	//jj.name = "Jack jack";
	//jj.address = "Uptown";
	//jj.age = 2;
	//jj.height = 175;
	//jj.weight = 50;
	
	// 객체가 동작하는 것처럼 만들 수 있다. 
	jj.print();

	//print(jj.name, jj.address, jj.age, jj.height, jj.weight);
	//print(jj);

	vector<string>	name_vec;
	vector<string>	addr_vec;
	vector<int>		age_vec;
	vector<double>  height_vec;
	vector<double>  weight_vec;

	//print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);


	return 0;
}
