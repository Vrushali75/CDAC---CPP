#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:
    complex();
    complex(int,int);
    void display();
    void operator-();
};
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
        cout<<real<<"+"<<img<<"i"<<endl;
    else
        cout<<real<<img<<"i"<<endl;
}
void complex::operator-()
{
    real=-this->real;
    //real=this->real*-1;
    img=-this->img;
    //img=this->img*-1;


}
int main()
{
    complex c1(-6,2);
    c1.operator-();
    c1.display();
}
