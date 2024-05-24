#include<iostream>
using namespace std;
class Demo
{
	int length;
		public:
			Demo()
			{
				length=0;
			}
			friend int DemoFun(Demo);
};
int DemoFun(Demo l)
{
	l.length= l.length+10;
	return l.length;
}
int main()
{
	Demo d;
	cout<<"Length : "<<DemoFun(d)<<endl;
}
