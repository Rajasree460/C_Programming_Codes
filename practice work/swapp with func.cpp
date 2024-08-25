//swapping with func
#include<stdio.h>
int swap(int x,int y);
int main()
{
	int a,b;
	printf("enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	swap(a,b);
	return 0;
}
int swap(int x ,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("after swapping the value of a:%d and b:%d",x,y);
	
}
