#include<iostream>
using namespace std;
class SwapObjDemo
{
	int num;
	public:
		SwapObjDemo(int num)
		{
			this->num=num;
		}
		friend void swapFun(SwapObjDemo &,SwapObjDemo &);
};
void swapFun(SwapObjDemo &s1,SwapObjDemo &s2)
{
	int temp;
	cout<<"Before swapping: "<<s1.num<<" "<<s2.num<<endl;
	temp=s1.num;
	s1.num=s2.num;
	s2.num=temp;
	cout<<"After swapping: "<<s1.num<<" "<<s2.num<<endl;
}
int main()
{
	SwapObjDemo s1(100);
	SwapObjDemo s2(200);
	swapFun(s1,s2);
	return 0;
}
