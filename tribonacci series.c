//tribonacci
#include<stdio.h>
int main()
{
	int a=0;
	int b=1;
	int c=1;
	int i=1;
	int d,n;
	printf("enter the terms:");
	scanf("%d",&n);
	printf("tribonacci series:");
	while(i<=n)
	{
		printf("\t%d",a);
		d=a+b+c;
		a=b;
		b=c;
		c=d;
		i++;
	 } 
	 return 0;
}
