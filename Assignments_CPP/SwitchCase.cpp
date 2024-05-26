#include<iostream>
using namespace std;
void PrimeNum();
void ReverseNum();
void ArmstrongNum();
void FibonacciSeries();
void PowerNum();
void PalindromeNum();


int main()
{
	int ch;
	cout<<"Enter your choice"<<endl;
	cout<<"1) Prime Number"<<endl<<"2) Reverse Number"<<endl<<"3) Armstrong Number"<<endl<<"4) Fibonacci Series"<<endl<<"5) Power"<<endl<<"6) Palindrome"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
			PrimeNum();
		break;
		
		case 2:
			ReverseNum();
		break;
		
		case 3:
			ArmstrongNum();
		break;
		
		case 4:
			FibonacciSeries();
		break;
		
		case 5:
			PowerNum();
		break;
		
		case 6:
			PalindromeNum();
		break;
		
		case 7:
			exit;
		break;
		
		default:
			cout<<"Enter valid choice!";
		break;
	}
	return 0;
	
}
void PrimeNum()
{
	int limit,count=0;
	cout<<"Enter the limit for prime number range: "<<endl;
	cin>>limit;
	for(int i=2;i<limit;i++)
	{
		count=0;
		for(int j=2;j<i/2;j++)
		{
			if(i%j==0){
				count++;
				break;
			}
		}
		if(count==0){
			cout<<" "<<i;
		}
	}
}
void ReverseNum()
{
	int number2,rem;
	cout<<"Enter the number :"<<endl;
	cin>>number2;
	while(number2!=0)
	{
	    rem=number2%10;
	    number2=number2/10;
	    cout<<" "<<rem;
	}
}
void FibonacciSeries()
{
	int ans=0,i,num;
	cout<<"Enter the limit for fibonacci series: "<<endl;
	cin>>num;
	for(i=0;i<=num;i++)
	{
		ans=ans+i;
		cout<<" "<<ans;
	}
}
void PowerNum()
{
	int i,p,number;
	cout<<"Enter number and power"<<endl;
	cin>>number>>p;
	for(i=1;i<=p;i++)
	{
		p=p*number;		
	}
	cout<<"Answer is: "<<p;
} 
void PalindromeNum()
{
	int num,rem,orgnum=0,revnum=0;
	cout<<"Enter any 3 digit number"<<endl;
	cin>>num;
	for(orgnum=num;num!=0;)
	{
		rem=num%10;
		revnum=(revnum*10)+rem;
		num=num/10;
	}
	if(orgnum==revnum)
		cout<<"Palindrome";
	else
		cout<<"Not a Palindrome";
}
void ArmstrongNum()
{
	int i,num,sum,rem;
	cout<<"armstrong number between 1-1000 are: "<<endl;
	for(i=0;i<1000;i++)
	{
		sum=0;
		num=i;
		while(num>0)
		{
			rem=num%10;
			sum=sum+rem*rem*rem;
			num=num/10;
			
		}
		if (sum==i)
		{
			cout<<i<<" "<<endl;
		}
	}
}

