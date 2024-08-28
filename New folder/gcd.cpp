/*gcd*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two values\n");
	scanf("%d%d",&a,&b);
	while(a!=b)
	{
		if(a>b)
		a=a-b;
		else
		b=b-a;
	}
	printf(" the gcd :%d",a);
	return 0;
}
