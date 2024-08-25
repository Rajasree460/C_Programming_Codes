/* find vowel and consonant by using string with pointer*/
#include<stdio.h>
int main()
{
	char x[45];
	printf("enter your name:");
	gets(x);
	int v=0,c=0;
	char *p=x;
	while(*p!='\0')
	{
		if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
		v++;
		else
		c++;
	}
	printf("vowels:%d\n",v);
	printf("consonants:%d\n",c);
	return 0;
}
