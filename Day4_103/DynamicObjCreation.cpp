//Dynamic Object Creation
#include<iostream>
#include<cstring>
using namespace std;
class Student
{
	int roll_no;
	char name[20];
	
	public:
		void display();
		Student(int,char*);
};
Student::Student(int id,char* n)
{
	roll_no=id;
	strcpy(name,n);
}
void Student::display()
{
	cout<<"Student Roll No: "<<roll_no<<endl;
	cout<<"Name: "<<name<<endl;
}

int main()
{
	Student *ptr=new Student(101,"Vrushali");
	ptr->display();
	return 0;
}
