/*fivonacci series using function*/
#include<stdio.h>
int fibo(int x);
int main()
{
	int a=0,b=1,n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	printf("%d\n",a);
	printf("%d\n",b);
	fibo(n);
	
	return 0;
}
int fibo(int x)
{
	int a=0,b=1,i,c;
	for(i=2;i<=x;i++)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	
		
	}
}
