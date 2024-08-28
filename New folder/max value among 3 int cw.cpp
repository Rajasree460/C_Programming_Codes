/*max value among 3 int no*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three values of a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	printf("largest value among a,b,c:%d ",a);
	else if(b>a && b>c)
	printf("largest value among a,b,c:%d",b);
	else if(c>a && c>b)
	printf("largest value among a,b,c:%d",c);
	return 0;
}
