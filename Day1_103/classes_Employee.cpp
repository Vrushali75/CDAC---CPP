#include<iostream>
using namespace std;

class MyEmployee
{
	int id;
	double sal;
	public:
		void setData(int i,double s)
		{
			id=i;
			sal=s;
			
		}
		void setId(int i)
		{
			id=i;
		}
		void setSal(double s)
		{
			sal=s;
			
		}
		void display()
		{
			cout<<"data of employee is "<<id<<"and"<<sal<<endl;
			
		}
		int getId()
		{
			return id;
			
		}
		double getSalary()
		{
			return sal;
			
		}
};
// main

int main()
{
	MyEmployee e1;
	e1.setData(101,50000);
	e1.display();
	e1.setId(102);
	e1.display();
	e1.setSal(55000);
	e1.display();
	e1.getId();
	e1.getSalary();
	e1.display();
	cout<<e1.getId()<<" "<<e1.getSalary()<<endl;
	return 0; 
	
}
