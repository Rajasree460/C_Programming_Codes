//*gcd using recursion*//
#include<stdio.h>
int gcd(int,int);
int main()
{
	int n1,n2,result;
	printf("enter two no");
	scanf("%d%d,&n1,&n2");
	result=gcd(n1,n2);
	printf("gcd of %d and %d=%d",n1,n2,result);
	
}
int gcd(int a,int b)
{
	if(b!=0)
	return gcd(b,a%b);
	else
	return a;
}
