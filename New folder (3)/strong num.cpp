/*strong no.*/
#include<stdio.h>
int main()
{
	int rem,n,fact=1,sum=0,k;
	printf("enter the value of n\n");
	scanf("%d",&n);
	k=n;
	while(n!=0)
	{
		int i=1;
		rem=n%10;
		while(i<=rem)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(k==sum)
	printf("strong no.");
	else
	printf("not strong no.");
	return 0;
}
