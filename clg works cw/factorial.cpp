//*factorial*//
#include<stdio.h>
int main()
{
	int i,n,m=1;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	 m=m*i;
	printf("%d",m);

	return 0;
}
