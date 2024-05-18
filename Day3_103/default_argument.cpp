#include<iostream>
using namespace std;
void add(int=1,int=2,int=3);

int main()
{
	add();
	add(10);
	add(10,20);
	add(10,20,30);
	return 0;
	
}
void add(int a,int b,int c)
{
	cout<<a+b+c<<endl;
}
