/*armstrong*/
#include<stdio.h>
int main()
{
	int n,rem,sum=0,k;
	printf("enter the value of n\n");
	scanf("%d",&n);
	k=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(k==sum)
	printf("armstrong");
	else
	printf(" not armstrong");
	return 0;
	
}
