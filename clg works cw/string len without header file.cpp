/*string length withot header file*/
#include<stdio.h>

int main()
{
	char x[45];
	printf("enter your name:");
	gets(x);
	int i=0;
	while(x[i]!='\0')
	{
		i++;
	}
	printf("length:%d\n",i);
	
	return 0;
}

