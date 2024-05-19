//Creating an array of object dynamically
#include<iostream>
using namespace std;
class Student
{
    public:
    Student()
    {
        cout<<"You are inside Default Student Constructor"<<endl;
    }
    void show()
    {
        cout<<"You are inside show function"<<endl;
    }
};
int main()
{
    Student *stud = new Student[3];
    stud[0].show();
    stud[1].show();
    stud[2].show();
    return 0;
}