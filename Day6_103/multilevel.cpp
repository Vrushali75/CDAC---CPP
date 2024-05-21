#include<iostream>
using namespace std;
class Account
{
    protected:
    int flat_bonus=5000;
};
class Programmer : Account
{
    float sal=50000;
    public:
    void calc_salaray()
    {
        cout<<"Salary is: "<<flat_bonus+sal<<endl;
    }
};
int main()
{
    Programmer p;
    p.calc_salaray();
}