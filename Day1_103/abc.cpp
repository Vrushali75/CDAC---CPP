//Factorial
#include<stdio.h>
int main()
{
	int i,num,ans=1;
	printf("\nEnter any number for its factorial: ");
	scanf("%d",&num);//5
	for(i=1;i<=num;i++)
	{
		ans=ans*i;//0
	}
	printf("\nFactorial of %d = %d",num,ans);
}

