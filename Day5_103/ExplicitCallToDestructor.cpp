#include<iostream>
using namespace std;

class Test
{
	public:
	 Test()
	 {
	 	cout<<"constructor is called "<<endl;
	 	
	 }
	 ~Test()
	 {
	 	
	 	cout<<"destructor is called "<<endl;
	 }
};
int main()
{
	Test t1,t2;
	t1.~Test();
	t2.~Test();
}
