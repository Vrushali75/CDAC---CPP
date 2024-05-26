#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[]="Hello World";
	char b[10];
	char c[10];
	int count=0;
	int y=0;
	int length=strlen(a);
	cout<<"entire string is: ";	
	for(int i=0;i<length;i++)
	{
		cout<<a[i];
	}
	cout<<endl;
	for(int i=0;i<length;i++)
	{
		if(a[i]==' ')
		break;
		b[i]=a[i];
		count++;
	}
	for(int i=count;i<=length;i++)
	{
		c[y]=a[i];
		y++;
	}
	cout<<"first word is: ";
	int v=strlen(b);
	for(int i=0;i<v;i++)
	{
		cout<<b[i];	
	}
	cout<<endl;
	cout<<"second word is: ";
	int t=strlen(c);
	for(int i=0;i<t;i++)
	{
		cout<<c[i];	
	}
}

