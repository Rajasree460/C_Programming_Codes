/*no of 0's within a number*/
#include<stdio.h>
int main()
{
	int n,rem,count=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		if(rem==0)
		count=count+1;
		n=n/10;
	}
	printf("the no of 0 is:%d",count);
	return 0;
}
