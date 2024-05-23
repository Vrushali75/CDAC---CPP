#include<iostream>
using namespace std;
template<class T,int size>
class TemplateArr
{
    public:
    T arr[size];
    void insert()
    {
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
    }
    void display()
    {
        for(int i=0;i<size;i++)
        {
            cout<<" "<<arr[i];
        }
    }
    
};
int main()
{
    TemplateArr<int,10> a1;
    a1.insert();
    a1.display();
}