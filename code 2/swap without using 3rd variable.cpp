/*swap without using third variable*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the value of a and b :%d\t%d",a,b);
	return 0;
}
