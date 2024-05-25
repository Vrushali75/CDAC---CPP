#include<iostream>
using namespace std;
int main()
{
	float f =3.5;
	int a=f;
	cout<<"the value of a is :"<<a<<endl;
	
	int b=static_cast<int>(f);
	cout<<"the value of b is :"	<<b;
	return 0;
	
}
