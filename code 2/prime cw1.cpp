/*prime no using flag*/
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=2;i<=(n/2);i++)
	{
		if(n%i==0)
		printf("not prime no");
		else
		printf("prime no");
	}
	
	return 0;
}
