#include<iostream>
using namespace std;
int main()
{
	int a=10;
	char c='a';
	int*q=(int*)&c;
//	*q=10;
	int*p=static_cast<int*>(&c);//compile time error
		return 0;
	
}
