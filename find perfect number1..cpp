// write a c program to check whether a number is perfect or not
#include<stdio.h>
int main()
{
	int n,i=1,s=0;
	printf("enter the number: ");
	scanf("%d", &n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(s==n)
	{
		printf("%d is a perfect number",n);
	}
	else
	{
		printf("%d is not a perfect number",n);
	}
	return 0;
}
