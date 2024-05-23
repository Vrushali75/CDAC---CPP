#include<iostream>
using namespace std;
template<class X,class Y>
void fun( X a,Y b)
{
	cout<<a<<endl;
	cout<<b<<endl;
	
}
int main()
{
	fun(10,20.859);
	return 0;
	
}

