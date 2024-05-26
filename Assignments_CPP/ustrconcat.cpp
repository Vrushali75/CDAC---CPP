#include<iostream>
using namespace std;
void str_concat(char *a,char *b);
int main()
{
	char a[10],b[10];
	cout<<"Enter string 1: "<<endl;
	cin>>a;
	cout<<"Enter string 2: "<<endl;
	cin>>b;
	str_concat(a,b);
	cout<<"Concatenated string is: "<<a<<endl;
}
void str_concat(char *a,char *b)
{
	while(*a!='\0')
		a++;
	while(*b!='\0')
	{
		*a=*b;
		a++;
		b++;
	}
	*a='\0';
}

