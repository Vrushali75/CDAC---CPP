#include <iostream>
// without virtual size is 1 byte
using namespace std;
class A
{
	//without virtual function
virtual	void print()
    {
        cout << "Derived class print function \n" ;
    }
    void invoke()
    {
        cout << "Derived class invoke function \n";
        this -> print(); // called under non - virtual function
    }

};
class B
{

};
int main()
{
	A a;
	B b;
	cout<<"size of object a is "<<sizeof(A)<<endl;
	cout<<"size of object b is "<<sizeof(B)<<endl;
}
