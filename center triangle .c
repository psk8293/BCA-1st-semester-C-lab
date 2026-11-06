/*w.r.p to center triangle triangle
  *
 ***
*****
*/
#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter the rows no:");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i*2-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
