#include <iostream>

/* Boolean ÀÚ·áÇü
true(1), false(0)
*/

int main(void){
	
	using namespace std;
	
	bool b1 = true; // copy initialization
	bool b2(false); // direct ''
	bool b3{true}; // uniform ''
	
	cout << b1 << endl;
	cout << b3 << endl;
	
	
	return 0;
} 
