#include<iostream>
using namespace std;
class Employee
{
	int id;
	char name[20];
	
	public:
		void getData();
		void putData();
};
void Employee::getData()
{
	cout<<"Enter employee id: "<<endl;
	cin>>id;
	cout<<"Enter employee name: "<<endl;
	cin>>name;
}
void Employee::putData()
{
	cout<<"Employee ID: "<<id<<endl;
	cout<<"Employee Name: "<<name<<endl;
}
int main()
{
	Employee e1[20];
	int n,i;
	cout<<"Enter number of employee: "<<endl;
	cin>>n;
	
	//Accepting 
	for(i=0;i<n;i++)
	{
		e1[i].getData();
	}
	//displaying
	for(i=0;i<n;i++)
	{
		e1[i].putData();
	}
}

