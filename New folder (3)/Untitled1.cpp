/*pre post increament*/
#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter the value of x and y\n");
	scanf("%d%d",&x,&y);
	z=(x++)+(++y);
	printf("the result of %d ad %d is %d",x,y,z);
	return 0;
}
