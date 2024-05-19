#include<iostream>
#include<string.h>
using namespace std;

class StringDemo
{
	int len;
	char* ptr;
	
	public:
		
		StringDemo(char* sptr)
		{
			this->len=len;
			ptr= new char[len+1];
			strcpy(ptr,sptr);
			cout<<ptr<<endl;
		}
		StringDemo(const StringDemo& s)
		{
			this->len=len;
			this->ptr= new char[len+1];
			strcpy(this->ptr,s.ptr);
			cout<<"Copied String is: "<<this->ptr;
		}
};
int main()
{
	StringDemo s1("Hello");
	StringDemo s2(s1);
}
