//Fibonacci series
//0 1 1 2 3 5....
#include<iostream>
using namespace std;
int main()
{
	int ans=0,n1=0,n2=1,limit;
	
	cout<<"Enter the limit for fibonacci series: "<<endl;
	cin>>limit;
	cout<<n1<<" "<<n2;
	for(int i=1;i<=limit;i++)
	{
		ans=n1+n2;
		n1=n2;
		n2=ans;
		cout<<" "<<ans;
	}
}
