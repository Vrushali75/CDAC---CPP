
#include<iostream>
using namespace std;
int ustrlen(char* name);
int main()
{
	int length,x,y;
	char name[20],target[20],source[20];
	cout<<"Enter a string: "<<endl;
	cin>>name;
	cout<<name<<endl;
	length=ustrlen(name);
	cout<<"Length of entered string is: "<<length<<endl;
	
	//String reverse
	x=length-1;
	while(x>=0)
	{
		target[y]=name[x];
		x--;
		y++;
	}
	target[y]='\0';
	cout<<"Reverse string is: "<<target<<endl;
	return 0;
}
int ustrlen(char *name)
{
	int num=0;
	while(*name!='\0')
	{
		num++;
		name++;
	}
	return  num;
}
