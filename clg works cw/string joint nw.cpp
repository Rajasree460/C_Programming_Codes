/*string joint*/
#include<stdio.h>
#include<string.h>
int main()
{
	char x[45],y[50],t[50];
	printf("enter your name:");
	gets(x);
	printf("enter your name:");
	gets(y);
	strcat(t,y);
	printf(" new t string is:%s",t);
	return 0;
}

