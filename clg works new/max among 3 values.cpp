/*max value among 3 values*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a and b and c\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	printf("max:%d",a);
	else if(b>a && b>c)
	printf("max:%d",b);
	else if(c>a && c>b)
	printf("max:%d",c);
	return 0;
}
