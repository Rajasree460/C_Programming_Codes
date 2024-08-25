/*palindrome using string*/
#include<stdio.h>
#include<string.h>
int main()
{
char x[]="abba";
char t[50];
int l,i=0;
l=strlen(x);
while(l>=0)
{
t[i++]=x[--l];
}
t[i]='\0';
if(strcmp(x,t)==0)
printf("palindrome no");
else
printf("not palindrome no");
}
