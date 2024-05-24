#include<iostream>
using namespace std;
class SwapDemo
{
	int num1,num2,temp;
	public:
		SwapDemo(int a,int b)
		{
			this->num1=a;
			this->num2=b;
		}
		friend void swapFun(SwapDemo &);
};
void swapFun(SwapDemo &s)
{
	cout<<"Before swapping: "<<s.num1<<" "<<s.num2<<endl;
	s.temp=s.num1;
	s.num1=s.num2;
	s.num2=s.temp;
	cout<<"After swapping: "<<s.num1<<" "<<s.num2<<endl;
	
}
int main()
{
	SwapDemo s(20,30);
	swapFun(s);
}
