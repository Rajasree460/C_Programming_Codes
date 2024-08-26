/*opperators or func overloading(diff)*/
#include<stdio.h>
int sum(int a,int b);
int sum1(int a,int b);
double sum(double a,double b);
int main()
{
	int x,y,k,g;
	double m;
	printf("enter the value of x y \n");
	scanf("%d%d",&x,&y);
	k=sum(x,y);
	printf("the result is:%d\n",k);
	m=sum(x,y);
	printf("the result is:%d\n",m);
	g=sum1(x,y);
	printf("the result is:%d",g);
	return 0;
}
int sum(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
double sum(double a,double b)
{
	int c;
	c=a+b;
	return c;
}
int sum1(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
