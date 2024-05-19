#include<iostream>
#include<string.h>
using namespace std;
class String
{
	char* s;
	int size;
	public:
		String(char*);
		~String();
		
};
String::String(char* c)
{
	cout<<"constructor is called"<<endl;
	size=strlen(c);
	s=new char[size+1];
	strcpy(s,c);
	cout<<"String is "<<s<<endl;
}
String::~String()
{
	cout<<"destructor is called"<<endl;
	delete[]s;
	cout<<s;
}

int main()
{
	String str("Hello World!");
	
}
