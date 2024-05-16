#include<iostream>
using namespace std;
class Demo
{
	public:
		void show();
		void show() const;
};
void Demo::show()
{
	cout<<"In Non constant function";
}
void Demo::show() const
{
	cout<<"In constant function";
}
int main()
{
	Demo d1;
	d1.show();
}
