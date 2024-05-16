//Student constructor
#include<iostream>
using namespace std;
class Student
{
	int roll_no;
	char name[20];
	double fee;
	
	public:
	Student()
	{
		cout<<"Enter roll no: "<<endl;
		cin>>roll_no;
		cout<<"Enter Name: "<<endl;
		cin>>name;
		cout<<"Enter fee: "<<endl;
		cin>>fee;
	}
	void display()
	{
		cout<<"Student Details:"<<endl;
		cout<<"Student Roll No: "<<roll_no<<endl;
		cout<<"Student Name: "<<name<<endl;
		cout<<"Enter Fee: "<<fee<<endl;
	}
};
int main()
{
	Student s1;
	s1.display();
}
