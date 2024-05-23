#include<iostream>
using namespace std;
template<class t1,class t2>
void display(t1* x,t2 y)
{
	cout<<"name is:"<<x<<endl;
	cout<<"salary is:"<<y<<endl;
	
}
int main()
{
	int a;
	display(&a,1);
	display("Vrushali",85000);
	return 0;
	
}
