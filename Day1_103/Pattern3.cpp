/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15 
*/

#include<iostream>
using namespace std;
int main()
{
	int i,j,num=1;
	for(i=0;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"\t"<<num;
			num++;
			
		}
		cout<<"\n"<<endl;
	}
}
