//Prime number 
#include<iostream>
using namespace std;
 int main()
 {
 	int num,i=2;
 	cout<<"enter the number"<<endl;
 	cin>>num;
 	while(i<num)
 	{
 		if(num%i==0)
 			break;
 		i++;
	 }
	 if(i==num)
	  	cout<<"prime number"<<endl;
	 else
	 	cout<<"not prime"<<endl;
 }
