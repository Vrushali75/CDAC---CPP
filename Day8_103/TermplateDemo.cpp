#include<iostream>
using namespace std;
template<class T>
T add(T &a,T &b)
{
	T result = a + b;
	return result;
}
int main()
{
	int a=5;
	int b=8;
	float x= 5.2f;
	float y= 6.7f;
	cout<<"Addition is: "<<add(a,b)<<endl;
	cout<<"Addition is: "<<add(x,y)<<endl;
	return 0;
}
