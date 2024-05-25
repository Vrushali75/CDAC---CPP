#include<iostream>
using namespace std;
int main()
{
	enum Months{
		Jan=6,
		Feb,
		March,
		April,May,June,July,August,Sep,Oct,Nov,Dec
	};
	for(int i=Jan;i<Dec;i++)
	{
		cout<<" "<<i;
	}
}
