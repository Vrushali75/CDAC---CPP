//Constant member function in CPP
#include<iostream>
using namespace std;
class ABC
{
	public:
	int A;
	void fun() const
	{
		A=10; // Shows compile time error, constant member function can't initialize the value
	}
	
};
int main()
{
	ABC obj;
	obj.fun();
	return 0;
}
