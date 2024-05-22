#include<iostream>
using namespace std;
class Shape
{   
    public:
    int area;
    virtual int findArea()=0;
};
class Circle : public  Shape
{  
    int r=8;
    public:
    int  findArea(){
     
     area=3.14*r*r;
     cout<<"Area of Circle: "<<area <<endl;
   }
};
class Square : public Shape
{
    int side=4;
    public:
    int findArea()
    {
        area=side*side;
        cout<<"Area of Square: "<<area<<endl;
    }
};
class Rectangle : public Shape
{
    int len=4,bre=5;
    public:
    int findArea()
    {
        area=len*bre;
        cout<<"Area of Rectangle: "<<area<<endl;
    }
};
int main()
{
    Shape * c1=new Circle();
    c1 ->findArea();
    Shape * c2=new Square();
    c2->findArea();
    Shape * c3=new Rectangle();
    c3->findArea();
}