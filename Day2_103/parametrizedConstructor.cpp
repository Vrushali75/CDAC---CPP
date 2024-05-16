//Parametrized Constructor
#include<iostream>
#include<cstring>
using namespace std;
class Student
{
	int roll_no;
	char name[20];
	double fee;
	
	public:
	Student(int,char[],double);
	void display();
};

Student::Student(int r,char n[],double f)
{
	roll_no=r;
	strcpy(name,n);
	fee=f;
}
void Student::display()
{
	cout<<"Student Details: "<<endl;
	cout<<"Student Roll No: "<<roll_no<<endl;
	cout<<"Student Name: "<<name<<endl;
	cout<<"Enter Fee: "<<fee<<endl;
}

int main()
{
	Student s1(101,"Tejas",90000);
	s1.display();
	return 0;
}
