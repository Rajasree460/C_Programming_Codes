/*addition of n no by using factorial and recursion*/
#include<stdio.h>
int fact(int);
int main()
{
	int p,n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	p=fact(n);
	printf("the result:%d",p);
	return 0;
}
int fact(int x)
{
	if(x==0||x==1)
	 return x;
	 else
	 return x+fact(x-1);
}
