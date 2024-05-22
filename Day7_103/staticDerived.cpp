#include<iostream>
using namespace std;
class demo
{
	public:
		 static void show()
		{
			cout<<"in base";
		}
};
class demo1 : public demo
{
	public:
		 static void show()
		{
			cout<<"in derived";
		}
};
int main()
{
	demo * ptr=new demo1();
	ptr->show();
	
}