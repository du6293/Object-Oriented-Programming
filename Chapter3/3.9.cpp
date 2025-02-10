#include <iostream>
#include <bitset>

using namespace std;

int main() 
{
    
	const unsigned char opt0 = 1 << 0;
    const unsigned char opt1 = 1 << 1;
    const unsigned char opt2 = 1 << 2;
    const unsigned char opt3 = 1 << 3;

//	cout << bitset<8>(opt0) << endl;
//	cout << bitset<8>(opt1) << endl;
//	cout << bitset<8>(opt2) << endl;
//	cout << bitset<8>(opt3) << endl;

	unsigned char items_flag = 0;
	cout << " No Item " << bitset<8>(items_flag) << endl;
	
	// item0 on
	items_flag |= opt0;
	cout << " Item0 obtained " << bitset<8>(items_flag) << endl;
	
	// item3 on
	items_flag |= opt3;
	cout << " Item3 obtained " << bitset<8>(items_flag) << endl;
    
    // item3 off
    items_flag &= ~opt3;
    cout << " No Item " << bitset<8>(items_flag) << endl;
    
    // Check item1
    if(items_flag & opt1)
    {
		cout << " Have item item1" << endl;
	}
	else
	{
		cout << " Not have item1" << endl;
	}
	
	// Check item0
    if(items_flag & opt0)
    {
		cout << " Have item item0 " << endl;
	}
	else
	{
		cout << " Not have item item0" << endl;
	}

	// obtain item 2,3
	items_flag |= (opt2|opt3);
	cout << bitset<8>(opt2|opt3) << endl;
	cout << " Item2,3 obtained " << bitset<8>(items_flag) << endl;
	
	if((items_flag & opt2) && !(items_flag & opt1))
	{
		items_flag ^= (opt1^opt2);
	
	}
	cout << bitset<8>(items_flag) << endl;
	
    return 0;
}

