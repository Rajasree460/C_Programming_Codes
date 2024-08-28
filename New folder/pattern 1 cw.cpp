/* pattern printing 1*/
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		printf("* ");
		
		printf("\n");
		
	}
	return 0;
}
