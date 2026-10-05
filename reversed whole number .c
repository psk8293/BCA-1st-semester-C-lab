//write a c program to reverse the digit of a whole number
#include<stdio.h>
int main()
{
	int n,d,rev=0;
	printf("the whole number: ");
	scanf("%d", &n);
	while(n>0)
	{
		d=n%10;
		printf("\n%d digits",d);
		rev=rev*10+d;
		n=n/10;
	}
	printf("\nreversed value:%d",rev);
	return 0;
}
