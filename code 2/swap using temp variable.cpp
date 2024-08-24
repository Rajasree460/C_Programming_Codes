/*swap using temp variable*/
#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("the value of a and b :%d\t%d",a,b);
	return 0;
}
