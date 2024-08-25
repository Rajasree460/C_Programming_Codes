/*palindrome by string and pointer*/
#include<stdio.h>
#include<string.h>
int main()
{
	char x[]="abba";
	char t[50];
	char *p=&x[3];
	char *q=t;
	int l;
	l=strlen(x);
	while(l>=0)
	{
		*q=*p;
		l--;
		p--;
		q++;
	}
	*q='\0';
	printf("rev t:%s\n",t);
	if(strcmp(x,t)==0)
	printf("palindrome");
	else
	printf("not palindrome");
	return 0;
}
