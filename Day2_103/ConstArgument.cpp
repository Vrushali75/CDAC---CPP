#include<iostream>
using namespace std;
int Test(const int num)
{
//	num = num+1;  // if we wants to modify the constant argument it will throw the error
	cout<<"the value of num is : "<<num<< endl;
	
}
int main()
{
	Test(10);
	return 0;
	
}

//
//{
//	
//};
//int main()
//{
//	const Demo.d1;
//	
//}
