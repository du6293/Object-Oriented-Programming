#include <iostream>

// Homework: ���� 2���� ���� �� �Է¹޾Ƽ� ���ϱ� ����� ���� �� ����ϴ� �Լ� ����

using namespace std;

int addnum(int a, int b){
	
	cout << "ù��° ���ڸ� �Է��ϼ���. " << endl;
	cin >> a ;
	cout << "�ι�° ���ڸ� �Է��ϼ���. " << endl;
	cin >> b ;
	
	
	int sum = a + b;
	printf("result: %d\n", sum); 

}


int main(){
	int x = 0;
	int y = 0; 
	
	int n = 0;
	while(n < 5){
		addnum(x, y);
		n++;
	}

	return 0;
}
