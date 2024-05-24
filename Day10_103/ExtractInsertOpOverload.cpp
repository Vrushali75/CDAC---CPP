#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		complex(int r=0,int i=0)
		{
			real=r;
			img=i;
		}
		friend void operator<<(ostream&,const complex&);
		friend void operator>>(istream&,complex&);
};
void operator<<(ostream &out,const complex &c)
{
	out<<c.real;
	out<<"+"<<c.img<<"i"<<endl;
}
void operator>>(istream &in,complex &c)
{
	cout<<"Enter real part: "<<endl;
	in>>c.real;
	cout<<"Enter imaginary part: "<<endl;
	in>>c.img;
}
int main()
{
	complex c1;
	cin>>c1;
	cout<<"The complex object is: "<<endl;
	cout<<c1;
	return 0;
}
