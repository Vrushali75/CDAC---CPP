#include<iostream>
using namespace std;
int ustrlen(char* name);
int main()
{
	int length;
	char name[20];
	cout<<"Enter a string: "<<endl;
	cin>>name;
	cout<<name<<endl;
	length=ustrlen(name);
	cout<<"Length of entered string is: "<<length<<endl;
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
