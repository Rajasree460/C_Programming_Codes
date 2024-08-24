/*print smaller values from taken values*/
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i<n)
		printf("the no is %d\n",i);
	}
	return 0;
}
