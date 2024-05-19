#include<iostream>
using namespace std;
#include<cstring>
class DynaConstruct
{
    int len;
    char *ptr;

    public:
    DynaConstruct();
    void CharPrint();
    void StringPrint();
    DynaConstruct(char*);
    DynaConstruct(char,int);
    DynaConstruct(int);
};
DynaConstruct::DynaConstruct()
{
    int len=1;
    ptr=new char[len];
    *ptr='A';
}
void DynaConstruct::CharPrint()
{
    cout<<"Length:  "<<len;
    cout<<"Name:  "<<*ptr;
}
void DynaConstruct::StringPrint()
{
	cout<<"length is "<<len<<endl;
	cout<<"string is "<<ptr<<endl;
}
DynaConstruct::DynaConstruct(char * sptr)
{
    len=strlen(sptr);
    ptr = new char[len+1];
    strcpy(ptr,sptr);
}
DynaConstruct::DynaConstruct(char ch,int length)
{
    int i;
    len=length;
    ptr=new char[len+1];
    for(i=0;i<length;i++)
    {
        ptr[i]=ch;
    }
}
DynaConstruct::DynaConstruct(int length)
{
    
    int i;
    len=length;
    ptr = new char[len+1];
    cout<<"Accept name: "<<endl;
    cin>>ptr;
    strcpy(ptr,"Vrushali");
    // for(i=0;i<len;i++)
    // {
    //     cin>>ptr[i];
    // }
    // ptr[i]='\0';
}
int main()
{
    DynaConstruct d1;
    d1.CharPrint();
    DynaConstruct d2("Vrushali");
    d2.StringPrint();
    DynaConstruct d3('*',50);
    d3.StringPrint();
    DynaConstruct d4(5);
    d4.StringPrint();
}