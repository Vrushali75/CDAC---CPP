#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		complex();
		complex(int,int);
		complex operator+(int);
		friend complex operator+(int,complex&);
		void display();
};
complex operator+(int n,complex &s)
{
	complex temp;
	temp.real=s.real+n;
	temp.img=s.img+n;
	return temp;
}
complex::complex()
{
	real=img=0;
}
complex::complex(int r,int i)
{
	real=r;
	img=i;
}
void complex::display()
{
	if(img>0)
	{
		cout<<real<<"+"<<img<<"i"<<endl;
	}
	else
		cout<<real<<img<<"i"<<endl;
	
}
complex complex :: operator+(int n)
{
	complex temp;
	temp.real=real+n;
	temp.img=img+n;
	return temp;
}
int main()
{
	complex c1(5,-6);
	complex c2=5+c1;
	c2.display();
}
