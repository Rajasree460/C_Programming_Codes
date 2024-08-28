/*armstrong no*/
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
	printf("armstrong no");
	else
	printf("not armstrong no");
	return 0;
}
