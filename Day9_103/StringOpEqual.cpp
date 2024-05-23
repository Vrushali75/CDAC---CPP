#include<iostream>
using namespace std;
#include<string.h>
class string1
{
	int len;
	char* ptr;
	public:
		void display();
		string1(char*);
		string1 operator=(string1&);
		string1(string1&)
		{
			cout<<"copy constructor is called";
		}
		~string1()
		{
			
			cout<<"destrutor is called"<<this<<endl;
		}
		
};
string1 string1::operator=(string1& s)
{
	cout<<"assignment is called\n";
	len=s.len;
	delete[] ptr;
	ptr=new char[len+1];
	strcpy(ptr,s.ptr);
	return (*this);
}
void string1::display()
{
	cout<<"length is "<<len<<endl;
	cout<<"string is "<<ptr<<endl;
}
string1::string1(char * sptr)
{
	cout<<this<<endl;
	len=strlen(sptr);
	ptr=new char[len+1];
	strcpy(ptr,sptr);
}	

int main()
{


	string1 s1("abc");
	string1 s2("xyz");
	//string1 s3=s1;//s2.operator=(s1)
	s1=s2;
	

}
