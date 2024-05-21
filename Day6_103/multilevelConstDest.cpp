#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"In class A constrctor"<<endl;
    }
    ~A()
    {
        cout<<"In class A destructor"<<endl;
    }
};
class B
{
    public:
    B()
    {
        cout<<"In class B constrctor"<<endl;
    }
    ~B()
    {
        cout<<"In class B destructor"<<endl;
    }
};
class C:public B,public A
{
     public:
    C()
    {
        cout<<"In class C constrctor"<<endl;
    }
    ~C()
    {
        cout<<"In class C destructor"<<endl;
    }
};
int main()
{
    C obj;
    return 0;
}
