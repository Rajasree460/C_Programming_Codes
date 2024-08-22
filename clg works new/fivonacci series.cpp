/*fivonacci series*/
#include<stdio.h>
int main()
{
	int i,a=0,b=1,n,c;
	printf("enter the value of n\n");
	scanf("%d",&n);
	printf("%d\n",a);
	printf("%d\n",b);
	for(i=2;i<=n;i++)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}
	return 0;
}
