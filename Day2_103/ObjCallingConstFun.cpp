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
	int getValue() const
	{
		return val;
	}
};
int main()
{
	Test t1(20);
	cout<<t1.getValue();
	return 0;
}
