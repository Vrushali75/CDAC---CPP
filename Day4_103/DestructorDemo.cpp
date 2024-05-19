#include<iostream>
using namespace std;
class Demo
{
    int *ptr;
    public:               
    
    ~Demo()
    {
        cout<<"Destructor called"<<endl;
        delete ptr;
    }
    Demo()
    {
        ptr=new int;
        *ptr = 10;
    }
    void display()
    {
        cout<<"Value is: "<<*ptr;
    }
};
int main()
{
    Demo d1;
    d1.display();
    d1.~Demo();
    return 0;
}