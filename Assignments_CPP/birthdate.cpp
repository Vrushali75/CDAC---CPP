#include<iostream>
#include<string.h>
using namespace std;
class Date
{
	int dd, mm ,yy;
	public:
		Date(int d,int m, int y)
		{
			dd=d;
			mm=m;
			yy=y;
			
		}
		friend Date operator==(Date& n,Date& n1);
			
};

 Date operator==(Date& n,Date& n1)
			{
				if (n.dd == n1.dd && n.mm==n1.mm )
			cout<<"its your birthday , HAPPY BIRTHDAY!!!!"<<endl;
				else
				cout<<"date not matched"<<endl ;
	}
int main()
{ 
	int dd,mm,yy;
	cout<<"enter date in format of dd/mm/yyyy"<<endl;
	cin>>dd>>mm>>yy;
	Date d1(dd,mm,yy);
	Date d2(13,06,2000);
	(d1==d2);//operator==(d1,d2)
	//cout<<"its your birthday , HAPPY BIRTHDAY!!!!"<<endl;	
	//	else
	//cout<<"date not matched"<<endl;

}
