#include<iostream>
using namespace std;
template<class T,class Y>
class A
{
	T num1;
	Y num2;
	public:
	A(T a,Y b)
	{
		num1=a;
		num2=b;
	}
	void show()
	{
		cout<<"Values are: "<<num1<<" "<<num2<<endl;
	}
};
int main()
{
	A<int,float> d(20,33.3);
	d.show();
}
