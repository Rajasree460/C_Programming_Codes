/*operator/function overloading*/
#include<stdio.h>
int sum(int a,int b);
double sum(double c,double d);
int main()
{
	int x,y,k,m,p,q;
	printf("enter the value of x y p q\n");
	scanf("%d%d%d%d",&x,&y,&p,&q);
	k=sum(x,y);
	printf("the result is:%d\n",k);
	m=sum(p,q);
	printf("the result is:%d",m);
	return 0;
}
int sum(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
double sum(double c,double d)
{
	double e;
	e=c+d;
	return e;
}
