/*Write a C program to display odd numbers from 1-n */
#include<stdio.h>
int main()
{
	int i=1;
	int n;
	printf("The n:");
	scanf("%d", &n);
	while(i<=n)
	{
		printf("The odd numbers are: %d\n",i);
		i=i+2;
	}
	return 0;
}
