#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char name[100];
	cout<<"enter your name: "<<endl;
	cin.getline(name,100);
	cout<<name<<endl;
	cout<<setw(10)<<setiosflags(ios::right)<<"IET"<<endl;
	cout<<setiosflags(ios::oct)<<96<<endl;
	cout<<setiosflags(ios::hex)<<65<<endl;
	cout<<setiosflags(ios::dec)<<0101<<endl;
	cout<<setiosflags(ios::showpos)<<62<<endl;
	cout<<setiosflags(ios::showpos)<<-67<<endl;
	cout<<setiosflags(ios::scientific)<<6234.958746<<endl;
	return 0;
}
