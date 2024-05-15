//Swapping by Address

#include<iostream>
using namespace std;
void swapNumbers(int* num1,int* num2);
int main()
{
	int num1,num2;
	cout<<"\nEnter any two numbers: "<<endl;
	cin>>num1>>num2;
	cout<<"\nBefore swapping : "<<num1<<" "<<num2;
	swapNumbers(&num1,&num2);
	//Pass By address
	cout<<"\nAfter swapping: "<<num1<<" "<<num2;
	return 0;
}
void swapNumbers(int* num1,int* num2)
{
	int temp;
	temp=*num1;
	*num1=*num2;
	*num2=temp;
	
	
}

