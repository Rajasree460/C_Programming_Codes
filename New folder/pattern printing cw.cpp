/*pattern printing*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("\n");
		for(j=0;j<=i;j++)
		 printf("*");
		 
	}
	printf(" ");
	return 0;
}
