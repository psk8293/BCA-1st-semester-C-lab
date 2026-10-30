// write a c program to check whether a number is prime or not using while loop then using for loop
#include<stdio.h>
int main()
{
	int n,i=2;
	printf("\n enter a number: ");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			break;
			i++;
		}
	}
	if (n<=1)
	{
		printf("%d is not a prime number",n);
	}
	else if (i==n)
	{
		printf("%d is a prime number",n);
	}
	else
	{
		printf("%d is not a prime number",n);
	}
	return 0;
}
