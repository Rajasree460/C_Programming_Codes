/*string copy*/
#include<stdio.h>
#include<string.h>
int main()
{
	char x[45],t[50];
	printf("enter your name:");
	gets(x);
	strcpy(t,x);
	printf("t string is:%s",t);
	return 0;
}

