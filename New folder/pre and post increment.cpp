/*pre & post increment*/
#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter two no\n");
	scanf("%d%d",&x,&y);
	z=(x++)+(++y);
	printf("the result of add of %d and %d :%d",x++,y++,z);
	return 0;
}
