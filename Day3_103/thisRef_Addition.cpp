// addition of two complex number 
#include<iostream>
using namespace std;
class complex
{
	int c3 ;
	public:
	
		void get();
		
		complex add(complex & c)
		{
			complex temp;
			temp.c3=this->c3 + c.c3;
			return temp ;	 
		}
		void show()
		{
			cout<<"value is   "<<c3;
		}
		
};
void complex::get()
{
	cin>>this->c3;
}
//main 
int main()
{
	complex c1,c2;
	c1.get();
	c2.get();
	complex c3=c1.add(c2);
	c3.show();
}

// Output = complex number is :3+6i
