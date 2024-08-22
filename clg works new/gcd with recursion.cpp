/*gcd with recursion*/
#include<stdio.h>
int gcd(int a,int b);
int main()
{
	int x,y,p;
	printf("enter the value of x and y\n");
	scanf("%d%d",&x,&y);
	p=gcd(x,y);
	printf("gcd:%d",p);
	return 0;
}
int gcd(int a,int b)
{
	while(b!=0)
	{
		if(b>a)
		return (b%a,b);
		else
		return a;
	}
	
}
