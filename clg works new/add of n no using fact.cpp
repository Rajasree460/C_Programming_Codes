/*add of n no using fact with recursion*/
#include<stdio.h>
int fact(int x);
int main()
{
	int n,p;
	printf("enter the value of n\n");
	scanf("%d",&n);
	p=fact(n);
	printf("the result is:%d",p);
	return 0;
}
int fact(int x)
{
	if(x==0||x==1)
	return x;
	else
	return x+fact(x-1);
}

