/*prime continue*/
#include<stdio.h>
int main()
{
	int n,i,flag=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		{
		
		if(n%i==0)
		flag=0;
		else
		flag=1;
	}
	if(flag=0)
	printf("not prime");
	else
	continue;
	return 0;
}
}
