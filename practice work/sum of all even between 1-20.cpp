/*sum of all even no between 1-20*/
#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
		sum=sum+i;
	}
	printf("the sum is:%d",sum);
	return 0;
	
}
