/*copy the same by string with pointer*/
#include<stdio.h>
int main()
{
	char x[]="aliah";
	char t[50];
	char *p=&x[4];
	char *q=t;
	while(*p!='\0')
	{
		*q=*p;
		p++;
		q++;
	}
	*q='\0';
	printf("t string is:%s",t);
	return 0;
}
