/*string length & copy &  joint*/
#include<stdio.h>
#include<string.h>
int main()
{
	char x[45],y[50],t[50];
	int l;
	printf("enter your name:");
	gets(x);
	printf("enter your name:");
	gets(y);
	l=strlen(x);
	printf("length:%d\n",l);
	strcpy(t,x);
	printf("t string is:%s\n",t);
	strcat(t,y);
	printf(" new t string is:%s",t);
	return 0;
}

