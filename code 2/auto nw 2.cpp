/*auto 2*/
#include<stdio.h>
void inc()
{
	auto int x=5;
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
