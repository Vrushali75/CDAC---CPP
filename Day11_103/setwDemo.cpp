#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout<<setfill('*')<<endl;
	cout<<setw(5)<<1<<endl;
	cout<<setfill('#')<<endl;
	cout<<setw(5)<<10<<endl;
	cout<<setfill(' ')<<endl;
	cout<<setw(5)<<100<<endl;
	cout<<endl;
	cout<<"Setprecision of 60.123 is "<<setprecision(2)<<60.123<<endl;
	cout<<"Coversion of 62 decimal to octal number is: "<<setbase(8)<<62<<endl;
	cout<<"Conversion of 98 decimal to hexadecimal is: "<<setbase(16)<<98<<endl;
	cout<<"Conversion of 0101 binary to decimal is: "<<setbase(10)<<0101<<endl;
	cout<<"Conversion of hexadecimal 0x41 to decimal is: "<<setbase(10)<<0x41<<endl;
	
}
