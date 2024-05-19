#include<iostream>
using namespace std;
class Demo
{
	int id;
	public:
		void init(int num)
		{
			id=num;
		}
		void display()
		{
			cout<<"Value of number is: "<<id<<endl;
		}
};
int main()
{
	Demo d1;
	d1.init(10);
	d1.display();
	Demo d2(d1);
	d2.display();
}
