#include<iostream>
using namespace std;
class Box
{
	int len,height;
	int* breadth;
	public:
		Box()
		{
			breadth = new int;
		}
		void setDimension(int l,int b,int h)
		{
			len=l;
			*breadth=b;
			height=h;
		}
		void display()
		{
			cout<<"Length: "<<len<<endl;
			cout<<"Breadth: "<<*breadth<<endl;
			cout<<"Height: "<<height<<endl;
		}
		Box(Box& s)
		{
			len=s.len;
			breadth=new int;
			*breadth=*(s.breadth);
			height=s.height;
		}
		~Box()
		{
			cout<<"Destructor is called"<<endl;
			delete breadth;
		}
};
int main()
{
	Box b1; 
	b1.setDimension(20,10,60);
	b1.display();
	Box b2(b1);
	b2.display();
}
