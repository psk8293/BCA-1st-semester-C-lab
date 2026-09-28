/*1+2+4+7+11...upto n terms.
 Write a C program to */
#include<stdio.h>
int main()
{
	int term=1, i=1;
	int n;
	long int sum=0;
	printf("The value of n: ");
	scanf("%d", &n);
	while(i<=n)
	{
		sum=sum+term;
		term=term+i;
		i++;
	}
	printf("The value of sum: %d\n",sum);
	return 0;
}
