/*extern 2*/
#include<stdio.h>
void inc();
extern int x=5;
int main()
{
	int x=3;
	printf("%d\n",x);
	inc();
	return 0;
}
void inc()
{
	printf("%d\n",x);
}
