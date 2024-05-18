#include<iostream>
using namespace std;
int sum(int a,int b,int c=2,int d=6)
{
	return(a+b+c+d);
}
int main()
{
	cout<<sum(10,20)<<endl;
	cout<<sum(10,20,30)<<endl;
	cout<<sum(10,20,30,5)<<endl;
}
