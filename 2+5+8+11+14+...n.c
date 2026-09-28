/*2+5+8+11+14+...upto n terms
Write a C program to calculate sum of the given series*/
#include<stdio.h>
int main()
{
	int i=2;
	int n;
	long int sum=0;
	printf("The value of n: ");
	scanf("%d", &n);
	while(i<=n)
	{
		sum=sum+i;
		i=i+3;
	}
	printf("The value of sum: %d\n",sum);
	return 0;
}
