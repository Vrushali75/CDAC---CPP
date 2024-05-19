#include<iostream>
#include<string.h>
using namespace std;
class StringDemo
{
	char* ptr;
	int len;
	public:
		StringDemo(char*);
		void display();
		~StringDemo();
		StringDemo(StringDemo&);
};
StringDemo::StringDemo(char* sptr)
{
	len=strlen(sptr);
	ptr=new char[len+1];
	strcpy(ptr,sptr);
}
void StringDemo::display()
{
	cout<<"Length: "<<len<<endl;
	cout<<"Name: "<<ptr<<endl;
}
StringDemo::~StringDemo()
{
	if(ptr)
	{
		cout<<"Destructor is called"<<endl;
		delete[] ptr;
	}
	cout<<"Deleted"<<endl;
}
StringDemo::StringDemo(StringDemo & str)
{
	this->len=str.len;
	this->ptr=new char[this->len+1];
	strcpy(this->ptr,str.ptr);
	cout<<this->ptr<<endl;
}
int main()
{
	StringDemo s1("Vrushali");
	s1.display();
	StringDemo s2(s1);
	s2.display();
}















