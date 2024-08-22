/*factorial*/
#include<stdio.h>
int main()
{
	int i,n,mul=1;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	mul=mul*i;
	printf("the fact is:%d",mul);
	return 0;
}
