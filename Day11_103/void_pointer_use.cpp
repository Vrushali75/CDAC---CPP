#include<iostream>
using namespace std;

int main()
{
	int n =10;
	float f=55.55;
	char c= 'b';
	 void* ptr;
	
	
	ptr=&n;
	cout<<"the value of integer is:"<<n<<endl;
	cout<<"the address of integer :"<<ptr<<endl;
	
	ptr =&f;
	cout<<"the value of float is:"<<f<<endl;
	cout<<"the address of float is :"<<ptr<<endl;
	
	
	ptr=&c;
	cout<<"the value of character is :"<<c<<endl;
	cout<<"the address of character is :"<<ptr<<endl;
	
	
}
