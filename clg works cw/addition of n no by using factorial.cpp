//*addition of n numbers using factorial*//
#include<stdio.h>
int fact(int);
int main()
{
	int n,p;
	printf("enter the value of n\n");
	scanf("%d",&n);
	p=fact(n);
	printf("result:%d",p);
	return 0;
}
int fact(int x)
{
	if(x==0||x==1)
	  return 1;
	 else
	  return x+fact(x-1);
	  
}
