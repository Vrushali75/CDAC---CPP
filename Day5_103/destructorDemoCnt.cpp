#include<iostream>
using namespace std;
static int count=0;


class Test
{
	public:
	 Test()
	 {
	 	cout<<this<<endl;
	 	count++;
	 	cout<<"constructor is called "<<count<<endl;
	 	
	 }
	 ~Test()
	 {
	 	cout<<this<<endl;
	 	cout<<"destructor is called "<<count<<endl;
	 	count--;
	 }
};
int main()
{
	Test t1;
	cout<<&t1<<endl;
	Test t2;
	cout<<&t2<<endl;
	Test t3;
	cout<<&t3<<endl;
}
