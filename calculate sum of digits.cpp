/* wtite a c program to calculate sum of digits*/
#include<stdio.h>
int main()
{
	int num,sum=0,digi;
	printf("the num=");
	scanf("%d", &num);
	while(num>0)
	{
		digi=num%10;
		printf("digits are: %d\n",digi);
		num=num/10;
		sum=sum+digi;
	}
	printf("\n sum:%d",sum);
	return 0;
	
}
