#include<iostream>
using namespace std;
void add(int a,int b)
{
	cout<<"Ans is: "<<a+b<<endl;
}
void add(double a,double b)
{
	cout<<"Ans is: "<<a+b<<endl;
}
int main()
{
	add('A','B');//Character promoted to integer
	add(32.12f,12.20f);//float promoted to double
}
