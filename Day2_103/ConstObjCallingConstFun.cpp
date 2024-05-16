//Non constant object calling constant functions
#include<iostream>
using namespace std;
class Test
{
	int val;
	public:
	Test(int v=0)
	{
		val=v;
	}
	void showMessage()
	{
		cout<<"Show Message function"<<endl;
	}
	void display() const
	{
		cout<<"Tejas is Talented person becuase of Vrushali's company!!!"<<endl;
	}
};
int main()
{
	const Test t1;
	//t1.showMessage(); Constant object always calls constant function
	t1.display();
	return 0;
}
