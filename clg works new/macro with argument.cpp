/*macro*/
#include<stdio.h>
#define area(x)(3.14*x*x)
int main()
{
	float r1,r2,p,q;
	r1=7;
	r2=8;
	p=area(r1);
	q=area(r2);
	printf("%f\n",p);
	printf("%f\n",q);
	return 0;
}
