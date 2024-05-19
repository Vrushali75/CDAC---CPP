#include<iostream>
using namespace std;

class Date
{
	int dd,mm,yy;
	public:
		void show();
		Date(int,int,int);
		Date(Date &);
		
};
Date::Date(int d,int m,int y)
{
	dd=d;
	mm=m;
	yy=y;
}
void Date::show()
{
	cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
	
}
Date::Date(Date &d)
{
	this->dd=d.dd;
	this->mm=d.mm;
	this->yy=d.yy;
	
}
int main()
{
	Date d1(27,03,2024);
	Date d2(d1);
	d1.show();
	d2.show();
	
	}
