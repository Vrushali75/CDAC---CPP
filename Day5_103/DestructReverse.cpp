#include<iostream>
using namespace std;
class Demo
{
	public:
	Demo()
	{
		cout<<"Constructor is called "<<endl;
	}
	~Demo()
	{
		cout<<"Destructor is called"<<endl;
	}
};
Demo d1;
int main()
{
	cout<<"Main begins"<<endl;
	Demo d2;
	{
		cout<<"Block begins"<<endl;
		Demo d3;
		cout<<"Block ends"<<endl;
	}
	cout<<"Main ends"<<endl;
}
