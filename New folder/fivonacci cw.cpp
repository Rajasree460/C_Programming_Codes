/*fivonacci series*/
#include<stdio.h>
int fibo(int);
int main()
{
	int n,p;
	printf("enter the value of n\n");
	scanf("%d",&n);
	p=fibo(n);
	printf("the result :%d",p);
	return 0;
	
}
int fibo(int x)
{
	if(x==0||x==1)
	return x;
	else
	return (fibo(x-1)+fibo(x-2));
}
