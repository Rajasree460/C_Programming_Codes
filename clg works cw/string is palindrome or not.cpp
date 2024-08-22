/*string is palindrome or not*/
#include<stdio.h>
#include<string.h>
int main()
{
	char x[45],t[50];
	printf("enter your name:");
	gets(x);
	int l,i;
	l=strlen(x);
	while(l>0)
	{
		t[i++]=x[i--];
    }
    t[i]='\0';
    if(strcmp(x,t)==0)
    printf("palindome");
    else
    printf("not palindrome");
    return 0;
}
