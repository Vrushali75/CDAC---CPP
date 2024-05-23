#include<iostream>
using namespace std;
class Demo
{
	private:
		int pvt_var;
	public:
		int public_var;
	Demo()
	{
		pvt_var=10;
		public_var=20;
	}
	friend class F;
};
class F
{
	public:
	void display(Demo &d)
	{
		cout<<"Private Variable is: "<<d.pvt_var<<endl;
		cout<<"Public variable is: "<<d.public_var<<endl;
	}
};
int main()
{
	Demo g;
	F frnd;
	frnd.display(g);
	return 0;	
}
