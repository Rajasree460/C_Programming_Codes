/*array with pointer*/
#include<stdio.h>
int main()
{
	int x[]={5,4,45,78};
	int *p;
	int *q;
	p=&x[1];
	q=&x[3];
	*q=*q+2;
	printf("the result is:%d\n",*q);
	return 0;
}
