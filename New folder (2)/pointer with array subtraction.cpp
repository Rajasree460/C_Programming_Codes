/*array with pointer*/
#include<stdio.h>
int main()
{
	int x[]={5,4,45,78};
	int *p;
	int *q;
	p=&x[1];
	q=&x[3];
	printf("the difference of address between x[1] and x[3]:%d\n",p-q);
	return 0;
}
