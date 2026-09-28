/*0,1,1,2,3,5,8...upto n terms.
 Write a C program to display the given sequence.*/
#include<stdio.h>
int main()
{
	int n;
	int i=1, a=0, b=1,c;
	printf("The value of n: ");
	scanf("%d", &n);
	while(i<=n)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	return 0;
}
