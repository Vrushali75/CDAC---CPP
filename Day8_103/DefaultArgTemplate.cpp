#include<iostream>
using namespace std;
template<class T,class U = char>
class A
{
    public:
    T a;
    U b;
    void add()
    {
        cin>>a>>b;
        cout<<" Addition is: "<<a+b<<endl;
    }
};
int main()
{
    A<int> a;
    a.add();
    A<int,int> b;
    b.add();
    return 0;
}