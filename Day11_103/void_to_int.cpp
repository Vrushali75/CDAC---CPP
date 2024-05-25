#include<iostream>
using namespace std;
int main()
{
	int n=10;
	void *voidptr;
	voidptr=&n;
	
	float* intPtr=static_cast<float*>(voidptr);
	*intPtr=95.32;
	cout<<"The value is: "<<*intPtr<<endl;
	return 0;
	
}
