/*extern*/
#include<stdio.h>
extern int x=5;
void inc()
{
	printf("%d",x);
}
int main()
{
	inc();
	return 0;
}
