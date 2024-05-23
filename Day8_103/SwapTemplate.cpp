#include<iostream>
using namespace std;
template <class T>
void swap1(T &a,T &b)
{
	T temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int a=10, b=20;
	char x='A',y='B';
	swap1(a,b);
	cout<<"After swapping: "<<a<<b<<endl;
	swap1(x,y);
	cout<<"After swapping: "<<x<<y<<endl;
	
}
