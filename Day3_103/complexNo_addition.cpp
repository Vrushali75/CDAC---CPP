// addition of two complex number 
#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		complex()
		{
			//for default
		}
		complex(int r,int i)
		{
			real=r;
			img=i;
			
		}
		void display()
		{
			cout<<"complex number is :"<<real<<"+"<<img<<"i"<<endl;
			
		}
		complex add(complex & c)
		{
			complex temp;
			temp.real=this->real+c.real;
			temp.img=this->img+c.img;
			return temp ;
			
		}
};
//main 
int main()
{
	complex c1(1,2);
	complex c2(2,4);
	complex c3=c1.add(c2);
	c3.display();
}

// Output = complex number is :3+6i
