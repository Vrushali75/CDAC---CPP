#include<iostream>
using namespace std;
int main()
{
	int limit,count=0;
	cout<<"Enter the limit for prime number range: "<<endl;
	cin>>limit;
	for(int i=2;i<limit;i++)
	{
		count=0;
		for(int j=2;j<i/2;j++)
		{
			if(i%j==0){
				count++;
				break;
			}
		}
		if(count==0){
			cout<<" "<<i;
		}
	}
	return 0;
}
