#include<iostream>
using namespace std;
template<class T>
class A
{
	public:
		T num1,num2;
	void display(T a,T b)
	{
		num1=a;
		num2=b;
		cout<<"Addition is: "<<num1+num2<<endl;
	}		
};
int main()
{
	A<char> a;
	a.display(65,66);
}
