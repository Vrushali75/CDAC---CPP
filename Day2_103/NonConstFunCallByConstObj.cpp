//Non constant object calling constant functions
#include<iostream>
using namespace std;
class Test
{
	int val;
	public:
	Test(int v=0)
	{
		val=v;
	}
	int getValue() 
	{
		return val;
	}
};
int main()
{
	const Test t1(20);
	cout<<t1.getValue(); //compile time error, bcoz const object calls only const function
	return 0;
}
