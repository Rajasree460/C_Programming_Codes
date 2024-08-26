/*operator/function overloading*/
#include<stdio.h>
int sum(int a,int b);
double sum(double a,double b);
int main()
{
	int x,y,k;
	double m;
	printf("enter the value of x and y\n");
	scanf("%d%d",&x,&y);
	k=sum(x,y);
	printf("the result is:%d\n",k);
	m=sum(x,y);
	printf("the result is:%d",m);
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
