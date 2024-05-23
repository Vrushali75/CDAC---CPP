#include<iostream>
using namespace std;
template<class T>
void fun(T a)
{
	std::cout<<"Value of a: "<<a<<std::endl;
}
template<class T, class Y>
void fun(T a,Y b)
{
	cout<<"Value of a: "<<a<<endl;
	cout<<"Value of b: "<<b<<endl;
}
int main()
{
	fun(10);
	fun(20,100);
}
