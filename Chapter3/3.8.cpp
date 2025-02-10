#include <iostream>
#include <bitset>

using namespace std;

int main() {
    
    /*
    cin, cout���� ����ϴ� >>,<< ��ȣ���� bitwise operator �� �ƴϴ�. 
    bitwise operator�� unsigned�̴�. 
	<<: left shift, 2^n multiple
	>>: right shift, 2^n divide
	~: bitwise NOT, !: logical not
	&: AND
	|: OR
	^: XOR 
	*/
	
    /* << */
    unsigned int a = 3;
	cout << std::bitset<8>(a) << endl; 
	unsigned int b = a << 3;
	cout << std::bitset<8>(b) << " " << b << endl; 
    
    cout << std::bitset<8>(a<<1) << " " << (a<<1) << endl; 
    cout << std::bitset<8>(a<<2) << " " << (a<<2) << endl; 
    cout << std::bitset<8>(a<<3) << " " << (a<<3) << endl; 
    cout << std::bitset<8>(a<<4) << " " << (a<<4) << endl; 
    
    /* >> */
    unsigned int c = 1024;
    cout << std::bitset<16>(c) << endl;
    cout << std::bitset<16>(c>>1) << " " << (c>>1) << endl; 
    cout << std::bitset<16>(c>>2) << " " << (c>>2) << endl; 
    cout << std::bitset<16>(c>>3) << " " << (c>>3) << endl; 
    cout << std::bitset<16>(c>>4) << " " << (c>>4) << endl; 
    
    /* ~ */
    cout << std::bitset<16>(~c) << " " << (~c) << endl;
    
    /* & */
    unsigned int d = 0b1100;
    unsigned int e = 0b0110;
    cout << d << " " << e << endl;
    cout << std::bitset<4>(d & e) << endl;
    cout << std::bitset<4>(d | e) << endl;
    cout << std::bitset<4>(d ^ e) << endl;
    
    d &= e; // �ٿ��� �� �� �ִ�. 
	cout << d << " " << e << endl;
    cout << (5 | 12) << endl;
    cout << (5 & 12) << endl;
    cout << (5 ^ 12) << endl;
    

      
    return 0;
}

