#include<iostream>
using namespace std;
template<class T,class Y>
T myFun(T a,Y b)
{
	return a>b?a:b;
}
int main()
{
	cout<<myFun(12,'a')<<endl;
	cout<<myFun<double>(20,30)<<endl;
	cout<<myFun('A','a')<<endl;
}
