/*pointer*/
#include<stdio.h>
int main()
{
	int x=5;
	int *p;
	int **q;
	p=&x;
	q=&p;
	printf("address of x:%u\n",p);
	printf("address of p:%u\n",q);
	printf("address of x:%u\n",*q);
	printf("value of x:%d\n",*p);
	printf("value of x:%d\n",**q);
	return 0;
}
