//Object creation on heap without virtual keyword with only one base class pointer

#include <iostream>
using namespace std;
class employee
{
    int id;

public:
    employee();
    employee(int);
    void display();
    int findsalary()
    {
        return 0;
    }
};
employee::employee()
{
    cout << "in default of emp\n";
    id = 0;
}
employee::employee(int i)
{
    cout << "in para of emp\n";
    id = i;
}
void employee::display()
{
    cout << "id of an emp is " << id << endl;
}

class wageemployee : public employee
{
    int hrs, rate;

public:
    wageemployee();
    wageemployee(int, int, int);
    void display();
    int findsalary();
};
wageemployee::wageemployee()
{
    cout << "in default of wage\n";
    hrs = 0;
    rate = 0;
}
wageemployee::wageemployee(int i, int h, int r)
    : employee(i)
{
    cout << "in para of wage\n";
    hrs = h;
    rate = r;
}
int wageemployee::findsalary()
{
    return hrs * rate;
}
void wageemployee::display()
{
    employee::display();
    cout << hrs << endl;
    cout << rate << endl;
}
class salesmanager : public wageemployee
{
    int sales, comm;

public:
    salesmanager();
    salesmanager(int, int, int, int, int);
    void display();
    int findsalary();
    void show();
};
salesmanager::salesmanager()
{
    cout << "in default of sales\n";
    sales = comm = 2;
}
salesmanager::salesmanager(int i, int h, int r, int s,
                           int c) : wageemployee(i, h, r)
{
    cout << "in para of sales\n";
    sales = s;
    comm = c;
}
void salesmanager::display()
{
    wageemployee::display();
    cout << "sales of an emp is " << sales << endl;
    cout << "comm of an emp is  " << comm << endl;
}
int salesmanager::findsalary()
{
    return wageemployee::findsalary() + sales * comm;
}
void salesmanager::show()
{
    cout << "in show fun\n";
}
int main()
{
    // salesmanager *ptr = new salesmanager();
    // cout << "salary is " << ptr->findsalary() << endl;
    // ptr->display();
    // return 0;
    employee *ptr = new employee();
    ptr->display();

    ptr = new wageemployee();
    ptr->display();

    ptr = new salesmanager();
    ptr->display();

    
}
