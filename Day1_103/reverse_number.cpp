//reverse the number
#include<iostream>
using namespace std;
int main()
{
	int num,rem;
	cout<<"enter the number"<<endl;
	cin>>num;
	while(num!=0)
	
	{
		rem=num%10;
		num=num/10;
		cout<<rem;
	}
}
