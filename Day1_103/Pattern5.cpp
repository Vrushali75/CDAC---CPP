/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/

#include<iostream>
using namespace std;
int main()
{
	int i,j,num;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"\t"<<j%2;
			num++;
			
			
		}
		cout<<"\n"<<endl;
	}
}
