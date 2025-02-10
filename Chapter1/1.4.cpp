// cin: console in
// cout: console out
// cout, cin은 stream의 일부이다.  
// endl: end line
// std: namespace
// \t: indentation(=4 space)
// \n: new line
// \a: audio

#include <iostream> // cint, cout, endl,...
#include <cstdio> // printf


int main(){
	
	using namespace std;
	
	int x = 1024;
	double pi = 3.141592;
	
	cout << "I love this lecture!\n\n\n";// << endl;
	cout << "x is " << x << " pi is " << pi << endl;
	
	cout << "abc" << "\t" << "def" << endl;
	cout << "ab" << "\t" << "cdef" << endl;
	
	cout << "\a" ;
	
	return 0;
}

