#include<iostream>
using namespace std;
int main()
{
	
	char *StudName;
	double *Marks;
	int num,total,len;
	float avg;
	
	//ACCEPTING NUMBER OF SUBJECTS
	cout<<"Enter NUMBER OF SUBJECTS: "<<endl;
	cin>>num;
	
	//accepting length of student name to inser \0 at the end;
	cout<<"Enter length of student name"<<endl;
	cin>>len;
	
	//Dynamically allocating memory
	StudName = new char[len+1];//len+1 for adding \0 at the end to make it a string
	cout<<"Name of Student: "<<endl;
	cin>>StudName;
	
	Marks = new double[num];
	cout<<"Enter marks of subjects"<<endl;
	for(int i=0;i<num;i++)
	{
		cout<<"Marks of subject: "<<i+1<<endl;
		cin>>Marks[i];
		total=total+Marks[i];
	}
	avg=total/num;
	
	cout<<"Student details: "<<endl;
	cout<<"Student Name: "<<StudName<<" Marks: ";
	for(int i=0;i<num;i++)
	{
		cout<<"Subject: "<<i+1<<" Marks: "<<Marks[i]<<endl;
	}
	cout<<"Average of marks: "<<avg;
	
}
