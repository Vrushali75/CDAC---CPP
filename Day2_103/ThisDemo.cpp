#include<iostream>
using namespace std;
class Test
{
	int a,b;
	public:
		void show(int a,int b)
		{
			this->a=a;
			(*this).b=b;
//			cout<<"Obj add"<<this<<endl;
//			cout<<"A: "<<this->a<<endl;
//			cout<<"B: "<<this->b<<endl;
		}
		void display()
		{
			cout<<a<<" "<<b;
		}
};
int main()
{
	Test t;
	t.show(10,20);
	t.display();
	return 0;
}
