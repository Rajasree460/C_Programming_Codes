/*gcd using recurtion*/
#include<stdio.h>
int gcd(int,int);
int main()
{
	int x,y,p;
	printf("enter two values\n");
	scanf("%d%d",&x,&y);
	p=gcd(x,y);
	printf("gcd of %d and %d :%d",x,y,p);
	return 0;
}
int gcd(int a,int b)
{
	if(b!=0)
	return (b,a%b);
	else 
	return a;
	
}
