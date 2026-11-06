/*W.r.p to print the following pattern
   *
  **
 ***
****
*/
#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter the rows no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
