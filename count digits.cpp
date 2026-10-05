/*write a c program to count a digits of a hole number*/
#include<stdio.h>
int main()
{
	int n,digi,count=0;
	printf("the value of n:");
	scanf("%d", &n);
	while(n>0)
	{
		digi=n%10;
		printf("digit: %d\n", digi);
		count++;
		n=n/10;
	}
	printf("\ncounting the digits are:%d",count);
	return 0;
}
