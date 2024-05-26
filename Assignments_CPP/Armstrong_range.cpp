#include<iostream>
using namespace std;
int main()
{
	int sum,rem,num;
	for(int i=1;i<=1000;i++)
	{
		sum=0;
		num=i;
		while(num>0)
		{
			rem=num%10;
			sum=sum+rem*rem*rem;
			num=num/10;
		}
		if(sum==i)
		{
			cout<<" "<<i;
		}
	}
	return 0;
}
