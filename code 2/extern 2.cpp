/*extern 2*/
#include<stdio.h>
extern int x=5;
void inc()
{
	printf("%d\n",x);
}
int main()
{
	int x=3;
	printf("%d\n",x);
	return 0;
}
