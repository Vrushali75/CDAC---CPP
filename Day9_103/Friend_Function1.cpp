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
		pvt_var=300;
		public_var=200;
	}
	friend void myFrndFun(Demo& obj);
};
void myFrndFun(Demo& obj)
{
	cout<<"Private variable is: "<<obj.pvt_var<<endl;
	cout<<"Public variable is: "<<obj.public_var<<endl;
}
int main()
{
	Demo d;
	myFrndFun(d);
	return 0;
}
