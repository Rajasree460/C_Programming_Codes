/*string with pointer 2*/
#include<stdio.h>
#include<string.h>
int main()
{
	char x[45];
	char *t;
	printf("enter your name:\n");
	gets(x);
    t=strchr(x,'a');
	printf("%c",*t);
	return 0;
}

