#include<iostream>
using namespace std;
class OverloadDemo
{
	public:
	int add(int n1,int n2)
	{
		int ans=n1+n2;
		cout<<"Addition: "<<ans<<endl;
	}
	int add(int n1,double n2,float n3)
	{
		double ans=n1+n2+n3;
		cout<<"Addition: "<<ans<<endl;
	}
	int add(float n1,float n2)
	{
		float ans=n1+n2;
		cout<<"Addition: "<<ans<<endl;
	}
	int add(int n1,float n2)
	{
		int ans=n1+(int)n2;
			cout<<"Addition: "<<ans<<endl;
	}
	void add(double num) 
	{
		cout<<"Value of double is: "<<num<<endl;
	}
};
int main()
{
	OverloadDemo d1;
	d1.add(10,20);
	d1.add(20,60.203,20.10f);
	d1.add(20.3f,60.3f);
	d1.add(10,60.32f);
	d1.add(623.152);
	return 0;
}
