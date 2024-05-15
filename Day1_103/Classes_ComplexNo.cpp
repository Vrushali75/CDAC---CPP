#include<iostream>
using namespace std;
class MyComplex
{

	int real,img;

	//public:
	void setComplex(int,int);
	void display();
	void setReal(int);
	int getImg();
};
void MyComplex::setComplex(int r,int i)
{
	real=r;
	img=i;
}
void MyComplex::display()
{
	//cout<<MyComplex::setComplex(30,2);//condtion fails
	//cout<<MyComplex::real;//condition works //output: 12 14 ,imaginary part is:3
	cout<<"Complex number is: "<<real<<"+"<<img<<"i"<<endl;
}
void MyComplex::setReal(int r)
{
	real=r;
}
int MyComplex::getImg()
{
	return img;
}

//Main
int main()
{
	MyComplex c1;
	c1.setComplex(12,3);
	c1.display();
	c1.setReal(14);
	c1.display();
	int i=c1.getImg();
	cout<<"Imaginary part of complex number is : "<<i;
}
