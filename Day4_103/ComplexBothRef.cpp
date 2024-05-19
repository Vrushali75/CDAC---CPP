#include<iostream>
using namespace std;
class Complex
{
	int real,img;
	
	public:
	Complex()
	{
	}
	Complex(int r,int i)
	{
		this->real=r;
		this->img=i;
	}

	void display()
	{
		cout<<" "<<real<<"+"<<img<<"i";
	}
	Complex add(Complex&,Complex&,int);
	
};

Complex Complex::add(Complex& c1,Complex& c2,int num)
{
	Complex temp;
	temp.real=c1.real+c2.real+num;
	temp.img=c1.img+c2.img+num;
	return temp;
}
int main()
{
	Complex c1(2,3);
	Complex c2(6,3);
	Complex c3;
	int num;
	cout<<"Enter number to be added in complex number: "<<endl;
	cin>>num;
	
	c3=c3.add(c1,c2,num);
	c3.display();
	return 0;
}
