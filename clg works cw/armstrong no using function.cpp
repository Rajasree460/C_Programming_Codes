//*armstrong no using function*//
#include<stdio.h>
int length(int);
int power(int,int);
int main()
{
	int n,d,sum=0,n1,L;
	printf("enter the value of n\n");
	scanf("%d",&n);
	L=length(n);
	n1=n;
	while(n!=0)
	{
	  d=n%10;
	  sum=sum+power(d,L);
	  n=n/10;	
	}
	if(sum==n1)
	 printf("armstrong no");
	else
	 printf(" not armstrong no");
	return 0;  
	
}
int length(int x)
{
	int c=0;
	while(x!=0)
	{
		c++;
		x=x/10;
		
	}
	return c;
}
int power(int x,int y)
{
	int mul=1,i;
	 for(i=1;i<=y;i++)
	 mul=mul*x;
return mul;
}


