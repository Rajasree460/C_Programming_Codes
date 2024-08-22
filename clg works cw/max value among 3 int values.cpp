//*the max int value among the integer no*//
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter value of a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	 printf("large value among a,b,c :%d",a);
	else if(b>a && b>c)
	 printf("large value among a,b,c:%d",b);
	else if(c>a && c>b)
	 printf("large value among a,b,c:%d",c);
	return 0;
}
