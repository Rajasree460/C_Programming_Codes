/*string char defining*/
#include<stdio.h>
#include<string.h>
int main()
{
	char x[45],t[45],y[45],z[45],r[45];
	printf("enter your name:");
	gets(x);
	printf("enter your name:");
	gets(y);
	t=strchr(x,'a');
	printf("%c\n",t);
	r=strstr(x,"aj");
	printf("%s\n",r);
	z=strcmp(x,y);
	printf("%d",z);
	return 0;
}

