#include<iostream>
using namespace std;
static int count=0;


class Test
{
	public:
	 Test()
	 {
	 	count++;
	 	cout<<"constructor is called "<<count<<endl;
	 	
	 }
	 ~Test()
	 {
	 	
	 	cout<<"destructor is called "<<count<<endl;
	 	count--;
	 }
};
int main()
{
	Test t1,t2,t3,t4;
}
