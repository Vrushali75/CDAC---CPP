#include<iostream>
using namespace std;

int main()
{
	int no1=1,num,space=5,star=1;
	for(;no1<=7;no1++)
	{
	
	for(num=1;num<=space;num++)
	{
		cout<<" ";
		
	}
	for(num=1;num<=star;num++)
	{
		cout<<"* ";
		
	}
	if(num>3)
	{
		space++;
		star--;
		
	}
	else
	{
		space--;
		star++;
		
	}
	cout<<endl;
}
	return 0;
}




