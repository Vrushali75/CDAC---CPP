#include<iostream>
using namespace std;
class Demo
{
	int x;
	public:
	
	void setData(int);
	int getData() const;
};
void Demo::setData(int y)
{
	x=y;
}
int Demo::getData() const
{
	return x;
}
int main()
{
	Demo d1;
	d1.setData(10);
	cout<<d1.getData()<<endl;
	return 0;
}
