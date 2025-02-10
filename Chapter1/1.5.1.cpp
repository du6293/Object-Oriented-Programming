#include <iostream>

// Homework: 숫자 2개를 여러 번 입력받아서 더하기 결과를 여러 번 출력하는 함수 구현

using namespace std;

int addnum(int a, int b){
	
	cout << "첫번째 숫자를 입력하세요. " << endl;
	cin >> a ;
	cout << "두번째 숫자를 입력하세요. " << endl;
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
