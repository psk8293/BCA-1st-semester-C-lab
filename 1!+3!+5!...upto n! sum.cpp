/* Write a C program to find the sum of the following series:
1!+3!+5!+... upto n numbers.

1!=1
3!=3*2*1=6
5!=5*4*3*2*1=120
upto n!*/
#include<stdio.h>
int main()
{
	int i=1, c=1, a=1;
	int n;
	long int fact, sum=0;
	printf("The value of n: ");
	scanf("%d", &n);
	while(c<=n)//outer...if true
	{
		i=1;
		fact=1;
		while(i<=a)//inner
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		c++;
		a=a+2;
		
	}
	printf("Sum of the factors: %d",sum);
	return 0;
}
