/*string with pointer*/
#include<stdio.h>
int main()
{
	char x[]="aliah";
	char t[50];
	char *p=&x[2];
	char *q=t;
	printf("%c",*(p+2));
	return 0;
}
