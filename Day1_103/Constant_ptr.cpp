#include<iostream>
using namespace std;
int main()
{
	int a=10,b=20;
	int* const ptr=&a;
	//ptr=&b;//compile time error
	
	*ptr=15;//output:0x6ffe0c//garbage value
	cout<<ptr;
}

