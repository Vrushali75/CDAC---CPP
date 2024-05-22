#include<iostream>
using namespace std;

class demo  //base class
{
	public:
		 static void show()  //static function
		{
			cout<<"in base";
		}
};
class demo1 : public demo // inheriated class from Demo
{
	public:
		 static void show() // 
		{
			cout<<"in derived";                        
		}
};
int main()
{
	demo * ptr=new demo1(); 
	ptr->show(); //show function should call the base class show()
	
}
