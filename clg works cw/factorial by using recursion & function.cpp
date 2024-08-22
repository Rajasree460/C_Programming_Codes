//*factorial by using function & recursion*//
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
int fact(int x,int result)
{
	if(x==0||x==1)
	  return result;
	 else
	  fact(x-1,x*result);
	  
}
