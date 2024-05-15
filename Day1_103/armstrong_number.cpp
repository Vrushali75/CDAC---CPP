//Armstrong number

#include<iostream>
using namespace std;
int main()
{
	int num,rem,sum=0,orgnum ;
	cout<<"enter three digit number"<<endl;
	cin>>num;
	orgnum=num;
	
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem*rem*rem;
		
    }	
    if(sum==orgnum)
    cout<<"armstrong number"<<endl;
    else
    cout<<"Not armstrong number"<<endl;
		
}
