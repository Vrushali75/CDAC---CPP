// Power base 
#include<iostream>
using namespace std;
int main()
{
	int power,number,ans=1;
	cout<<"Enter number and power: "<<endl;
	cin>>number>>power;
//	cout<<number<<power<<endl;
	for(int i=1;i<=power;i++)
	{
		ans=ans*number ;
	}
	cout<<"Answer is: "<<ans;
}

