/*array with pointer*/
#include<stdio.h>
int main()
{
	int x[]={5,4,45,78};
	int *p;
	p=&x[0];
	printf("address of x[0]:%u\n",p);
	printf("value of x[0]:%d\n",*p);
	return 0;
}
