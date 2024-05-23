#include<iostream>
using namespace std;
class complex
{
    int real,img;
    
    public:
    complex();
    complex(int,int);
    void display();
    complex operator-();
    complex operator--();
    complex operator--(int);
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
        cout<<real<<"+"<<img<<"i"<<endl;
}
complex complex::operator--()
{
    --this->real;
    --this->img;
    return (*this);
}
complex complex::operator--(int)
{
    complex temp = (*this);
    --this->real;
    --this->img;
    return temp;
}
int main()
{   
    complex c1(6,3);
    complex c2=--c1;
    c1.display();
    c2.display();
    
    complex c3(10,20);
    complex c4=c3--;
    c3.display();
    c4.display();

}