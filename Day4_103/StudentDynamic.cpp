//Student details
#include<iostream>
using namespace std;
int main()
{
	int studNum,num,m,len,total=0;
	float avg=0;
	cout<<"Enter number of students: "<<endl;
	cin>>studNum;
	cout<<"Enter number of Subject: "<<endl;
	cin>>num;
	
	int *ptr_studno = new int[studNum];
	for(int i=0;i<studNum;i++)
	{
		avg=0;
		total=0;
		
		cout<<"Enter length of name: "<<endl;
		cin>>len;
		

		int *ptr_marks = new int[num];
		char *ptr_name = new char[len+1];
	
	
		//Accepting name
		cout<<"Enter name of student: "<<endl;
		cin>>ptr_name;
	
		//Accepting marks for n subjects
		cout<<"Enter marks for subject: "<<endl;
		for(int i=0;i<num;i++)
		{
			cin>>ptr_marks[i];
			
		}
		for(int i=0;i<num;i++)
		{
			total = total + ptr_marks[i];
			avg=(float)total/num;	
		}
		
		
			//Displaying details
			cout<<"Student details: "<<endl;
			cout<<"Name of student: "<<" "<<ptr_name<<endl;

			for(int i=0;i<num;i++)
			{
				cout<<"Subject  "<<i+1<<"Marks: "<<ptr_marks[i]<<endl;
			}
			cout<<"Average Marks: "<<avg<<endl;
		
			cout<<"------------------------------------------------------"<<endl;
		
	
		delete []ptr_name;
		delete []ptr_marks;
	}
	return 0;
}

