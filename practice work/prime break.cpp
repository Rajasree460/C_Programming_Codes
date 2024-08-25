/*prime no using break*/
#include<stdio.h>
int main()
{
	int n,i,flag=0;
	printf("enter thw value of n\n");
	scanf("%d",&n);
	for(i=0;i<(n/2);i++)
	{
		if(n%i==0)
		flag=0;
		else
		flag=1;
		
	
	if(flag==1)
	printf("prime no");
	else 
	break;
}
	return 0;
}
