#include<iostream>
using namespace std;
class MyDate
{
	int dd,mm,yy;
	public:
	MyDate();
	void display();
	MyDate(int,int,int);
};
MyDate::MyDate()
{
	cout<<"the default constructor is\n";
	dd=19;
	mm=03;
	yy=2024;
	
}
void MyDate::display()
{
	cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
	
}
MyDate::MyDate(int d,int m,int y)
{
	dd=d;
	mm=m;
	yy=y;
	
}


//main
int main()
{
	MyDate d1;
	d1.display();
	MyDate d2 (20,03,2024);
	d2.display();
	return 0;
	
}

