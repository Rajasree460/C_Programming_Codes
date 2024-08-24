/*static*/
#include<stdio.h>
void inc()
{
	static int x=4;
	printf("%d\n",x);
	x++;
}
int main()
{
	inc();
	inc();
	inc();
	return 0;
}
