/*string 2*/
#include<stdio.h>
#include<string.h>
int main()
{
	char x[45],y[50];
	printf("enter your name:");
	gets(x);
	printf("enter your name:");
	gets(y);
	printf("%c\n",x[2]);
	printf("%s\n",x);
	printf("%c\n",y[2]);
	printf("%s",y);
	return 0;
}

