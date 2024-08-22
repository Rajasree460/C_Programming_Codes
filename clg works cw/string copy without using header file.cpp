/*string copy without header file*/
#include<stdio.h>

int main()
{
	char x[45],t[50];
	printf("enter your name:");
	gets(x);
	int i;
	for(i=0;x[i]!='\0';i++)
	{
		t[i]=x[i];
	}
	t[i]='\0';
	printf("t string is:%s",t);
	
	return 0;
}

