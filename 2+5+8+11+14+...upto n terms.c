/*2+5+8+11+14+...upto n terms
Write a C program to calculate sum of the given series*/
#include<stdio.h>
int main()
{
	int term=2, i=1;
	int n;
	long int sum=0;
	printf("The value of n: ");
	scanf("%d", &n);
	while(i<=n)
	{
		sum=sum+term;
		term=term+3;
		i++;
	}
	printf("The value of sum: %d\n",sum);
	return 0;
}
