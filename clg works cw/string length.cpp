/*string length*/
#include<stdio.h>
#include<string.h>
int main()
{
	char x[45],y[50];
	int l;
	printf("enter your name:");
	gets(x);
	l=strlen(x);
	printf("length:%d",l);
	return 0;
}

