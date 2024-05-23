#include<iostream>
using namespace std;

class Base
{
	public:
	void BaseFun(Base& obj);	
};
class A
{
	private:
		int pvt_var;
	protected:
		int pro_var;
	public:
	A()
	{
		pvt_var=30;
		pro_var=200;	
	}
	friend void A::BaseFun(Base& obj);
};
void A::BaseFun(Base& obj)
{
	cout<<"Private Variable is: "<<obj.pvt_var<<endl;
	cout<<"Protected Variable is: "<<obj.pro_var<<endl;
}
int main()
{
	Base b1;
	A a1;
	a1.BaseFun(b1);
	return 0;
}

